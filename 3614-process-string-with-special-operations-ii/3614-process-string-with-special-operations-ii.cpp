class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        const long long CAP = 1000000000000000000LL; 
        vector<long long> len(n);  
        long long cur = 0;

        // Pass 1: forward, compute lengths only
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch >= 'a' && ch <= 'z') cur = min(cur + 1, CAP);
            else if (ch == '*')         cur = (cur > 0 ? cur - 1 : 0);
            else if (ch == '#')         cur = min(cur * 2, CAP);
            // '%' leaves length unchanged
            len[i] = cur;
        }

        if (k >= len[n - 1]) return '.';

        // Pass 2: backward, map k to where it originally came from
        for (int i = n - 1; i >= 0; i--) {
            char ch = s[i];
            long long before = (i > 0 ? len[i - 1] : 0);

            if (ch >= 'a' && ch <= 'z') {
                if (k == before) return ch;   // k is this appended letter
                // else k < before: position unchanged
            } else if (ch == '*') {
                // a char was removed from the end; earlier positions untouched
            } else if (ch == '#') {
                if (k >= before) k -= before; // in the 2nd copy -> map into 1st
            } else if (ch == '%') {
                k = len[i] - 1 - k;           // reversal mirrors the index
            }
        }
        return '.';
    }
};