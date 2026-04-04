class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0 , num = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
             while(nums[i]>0)
            {
                int rem = nums[i]%10;
                num += rem;
                nums[i] /= 10;
            }
        }

       
        return abs(sum-num);
    }
};