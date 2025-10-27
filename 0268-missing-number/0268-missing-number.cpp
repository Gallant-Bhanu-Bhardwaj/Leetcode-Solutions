class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // int ans = n*(n+1)/2,sum=0;
        // for(int i=0;i<n;i++)
        // {
        //     sum += nums[i];
        // }
        // return ans - sum;

        int n = nums.size();
        int xorAll = 0;
        for(int i=0;i<n;i++)
        {
            xorAll ^= i ^ nums[i];
        }

        return xorAll ^ n;
    }
};