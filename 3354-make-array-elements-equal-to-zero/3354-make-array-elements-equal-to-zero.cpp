class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        vector<int> curr ;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
             curr.push_back(i);
        }
        int lhsSum =0 , rhsSum=0, j=0, ans=0;
        while(j<curr.size())
        {
            for(int i=0; i<curr[j];i++)
        {
            lhsSum += nums[i];
        }
        for(int i=curr[j]+1; i<nums.size();i++)
        {
            rhsSum += nums[i];
        }
        if(lhsSum == rhsSum)
         ans += 2;

       else if (abs(lhsSum - rhsSum) == 1)
         ans += 1; 

         j++;
         lhsSum =0, rhsSum =0;
        }

 return ans;
    }
};