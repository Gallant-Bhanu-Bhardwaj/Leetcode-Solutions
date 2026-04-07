class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int val = 0;
        set<int> ans;
        for(int i=0;i<nums.size();i++)
        {
          ans.insert(nums[i]);
        }
        if(ans.size() == nums.size())
         return false;
        else
         return true; 
    }
};