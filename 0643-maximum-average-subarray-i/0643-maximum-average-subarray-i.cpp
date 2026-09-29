class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0, j = 0;
        double sum = 0;
        double maxavg = INT_MIN;
        while (j < nums.size()) {
            sum += nums[j];
            if (j - i + 1 == k) {
                double avg = sum / k;
                maxavg = max(maxavg, avg);

                sum -= nums[i];
                i++;
            }
            j++;
        }
        return maxavg;
    }
};