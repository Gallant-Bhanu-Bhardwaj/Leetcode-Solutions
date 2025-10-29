class Solution {
public:
    long long smallestNumber(long long n) {
        long long x = 1;
        while ((x | (x - 1)) < n) { 
            x <<= 1;
        }

        long long res = 1;
        while (res < n) {
            res = (res << 1) | 1;  
        }
        return res;
    }
};
