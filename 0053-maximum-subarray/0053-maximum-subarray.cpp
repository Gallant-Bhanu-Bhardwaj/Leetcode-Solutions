class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN , cursum = 0;
        for(int x : nums)
        {
            cursum += x;
            maxsum = max(maxsum,cursum);
            if(cursum<0) cursum = 0;
        }
        return maxsum;
    }
};