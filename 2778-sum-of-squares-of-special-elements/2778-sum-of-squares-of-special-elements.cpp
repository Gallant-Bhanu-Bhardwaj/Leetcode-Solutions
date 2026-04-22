class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
       long long int ans = 0;
       int n= nums.size();
       for(int i=0;i<=n-1;i++)
       {
        if(n%(i+1) == 0)
         ans += nums[i] * nums[i];
       }
       return ans;
    }
};