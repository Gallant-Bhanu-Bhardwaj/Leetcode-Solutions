class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0,maxlen=0;
        while(j<nums.size())
        {
            if(nums[j] == 0)k--;

            if(k<0)
            {
                maxlen = max(maxlen,j-i);
                while(i<j && nums[i] != 0) i++;
                i++;
                k++;
            }
            j++;
        }
        maxlen = max(maxlen,j-i);
        return maxlen;
    }
};