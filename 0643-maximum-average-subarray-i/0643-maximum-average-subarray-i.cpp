class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int st = 0, end = k;
        for (int i = 0; i <= k - 1; i++) {
            sum += nums[i];
        }
        double maxsum = sum;
        
        while (end < nums.size()) {
            sum -= nums[st++];
            sum += nums[end++];
            maxsum = max(sum, maxsum);
        }
        return maxsum / k;
    }
};