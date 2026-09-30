class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0,k=1;
        int maxlen = 0;
        while(j<nums.size())
        {
            if(nums[j] != 1) k--;

            if(k<0)
            {
                maxlen = max(maxlen,j-i);
                while(i<j && nums[i] == 1)i++;
                i++;
                k++;
            }
            j++;
        }
        maxlen = max(maxlen,j-i);
        return maxlen-1;
    }
};