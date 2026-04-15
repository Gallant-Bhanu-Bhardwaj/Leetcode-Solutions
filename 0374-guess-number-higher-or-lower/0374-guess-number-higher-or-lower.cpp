class Solution {
public:
    int guessNumber(int n) {
        int i = 1, j = n;

        while (i <= j) {
            int mid = i + (j-i)/2;

            int res = guess(mid);

            if (res == -1) {
                j = mid - 1;
            } else if (res == 1) {
                i = mid + 1;
            } else {
                return mid;
            }
        }

        return -1; 
    }
};