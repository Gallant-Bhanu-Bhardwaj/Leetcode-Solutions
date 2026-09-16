class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1 = 0, candidate2 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == candidate1)
                count1++;
            else if (nums[i] == candidate2)
                count2++;
            else if (count1 == 0) {
                candidate1 = nums[i];
                count1++;
            } else if (count2 == 0) {
                candidate2 = nums[i];
                count2++;
            } else {
                count1--;
                count2--;
            }
        }

        // now verify
        vector<int> ans;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == candidate1)
                c1++;
            else if (nums[i] == candidate2)
                c2++;
        }

        if (c1 > nums.size() / 3)
            ans.push_back(candidate1);
        if (c2 > nums.size() / 3)
            ans.push_back(candidate2);

        return ans;
    }
};