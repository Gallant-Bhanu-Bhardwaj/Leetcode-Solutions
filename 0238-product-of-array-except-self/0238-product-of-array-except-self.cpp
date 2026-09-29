class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int zeroes = 0, prod = 1, n= nums.size();
         for(int x:nums)
         {
            if(x==0) zeroes++;
            else
             prod *= x;
         }
        vector<int> ans(n,0);
         for(int i=0; i<nums.size();i++)
         {
            if(zeroes == 0)
            {
                ans[i] = prod/nums[i];
            }
            if(zeroes == 1)
            {
                if(nums[i] == 0) ans[i] = prod;
            }
         }
         return ans;
    }
};