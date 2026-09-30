class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n,0),post(n,0);
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini = min(mini,nums[i]);
            pre[i] = mini;

            maxi = max(maxi,nums[n-i-1]);
            post[n-i-1] = maxi;
        }

        for(int i=0;i<n;i++)
        {
            if(nums[i]>pre[i] && nums[i] < post[i])
             return true;
        }
        return false;
    }
};