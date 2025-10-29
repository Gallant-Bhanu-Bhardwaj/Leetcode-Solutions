class Solution {
public:
    int smallestNumber(int n) {
        long long res = 1;
        while (res < n) {
            res = (res << 1) | 1;
        }
        return res;
    }
};