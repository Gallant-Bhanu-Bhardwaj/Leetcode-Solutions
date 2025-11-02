class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long flargest = LONG_MIN , slargest = LONG_MIN , tlargest = LONG_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == flargest || nums[i] == slargest || nums[i] == tlargest)
             continue;

            if(nums[i] > flargest)
             {
                tlargest = slargest;
                slargest = flargest;
                flargest = nums[i];
             } 
              else if(nums[i] > slargest)
             {
                tlargest = slargest;
                slargest = nums[i];
             } 
            else if(nums[i] > tlargest)
             {
                tlargest = nums[i];
             } 
        }
        return (tlargest == LONG_MIN)?(int)flargest: (int) tlargest;
    }
};