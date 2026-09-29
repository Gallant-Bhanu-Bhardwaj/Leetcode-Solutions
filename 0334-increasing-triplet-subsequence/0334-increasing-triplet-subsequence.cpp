class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n,0);
        vector<int> post(n,0);
        int mini = INT_MAX, maxi = INT_MIN;
        for(int i=0; i<nums.size();i++)
        {
            mini = min(nums[i],mini);
            pre[i] = mini;
        }

          for(int i=n-1; i>0;i--)
        {
            maxi = max(nums[i],maxi);
            post[i] = maxi;
        }

        for(int i=0;i<nums.size();i++)
        {
            if(pre[i]<nums[i] && nums[i] < post[i])
             return true;
        }
        return false;
    }
};