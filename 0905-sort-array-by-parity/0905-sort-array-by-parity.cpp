class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0 , n = nums.size() ,j = n-1;
        vector<int> ans(n,0);
        for(int it : nums)
        {
            if(it%2 == 0)
            { ans[i] = it;
              i++;
            }
            else
            {
                ans[j] = it;
                j--;
            }
        }
        return ans;
    }
};