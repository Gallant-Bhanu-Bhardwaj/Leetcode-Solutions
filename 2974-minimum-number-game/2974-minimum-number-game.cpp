class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(),nums.end());
        int i=0,j=1;
        while(j<nums.size())
        {
            arr.push_back(nums[j]);
            j+=2;
            arr.push_back(nums[i]);
            i+=2;
            
        }
        return arr;
    }
};