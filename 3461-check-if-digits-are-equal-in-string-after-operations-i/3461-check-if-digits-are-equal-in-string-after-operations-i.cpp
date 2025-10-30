class Solution {
public:
    bool hasSameDigits(string s) {
        vector<int> a;
        for (char c : s) a.push_back(c - '0');

        while (a.size() > 2) {
            vector<int> next;
            next.reserve(a.size() - 1); // avoid reallocation
            for (int i = 0; i + 1 < a.size(); i++) {
                next.push_back((a[i] + a[i + 1]) % 10);
            }
            a.swap(next); // replace efficiently
        }

        return a[0] == a[1];
    }
};
