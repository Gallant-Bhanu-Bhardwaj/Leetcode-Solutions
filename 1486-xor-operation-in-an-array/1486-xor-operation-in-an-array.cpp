class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        int ans;
        for(int i=0 ; i < n; i++)
        {
            ans = start + 2*i;
            nums.push_back(ans);
        }
        ans = nums[0];
        for(int i=1;i <n; i++)
        {
            ans = ans ^  nums[i];
        }
        return ans;
    }
};