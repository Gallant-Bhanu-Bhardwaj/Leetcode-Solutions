class Solution {
public:
    int hammingDistance(int x, int y) {
        int res = x ^ y, cnt = 0;
        while (res > 0) {
            if (res & 1 == 1)
                cnt++;
            res = res >> 1;
        }
        return cnt;
    }
};