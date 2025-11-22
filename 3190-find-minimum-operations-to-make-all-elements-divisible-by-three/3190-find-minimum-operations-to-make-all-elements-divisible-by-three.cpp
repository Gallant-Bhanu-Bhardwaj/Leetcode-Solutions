class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i<nums.size();i++)
        {
            int md = nums[i] % 3;
            int rem = 3 - md;
            int mini = min(md,rem);
            cnt += mini;
        }
        return cnt;
    }
};