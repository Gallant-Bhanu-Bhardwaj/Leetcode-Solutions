class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {

        int n = nums.size();
        long long ans = 0;

        for(int bit = 0; bit < 32; bit++) {

            int ones = 0;

            for(int num : nums) {
                if((num >> bit) & 1)
                    ones++;
            }

            int zeros = n - ones;

            ans += 1LL * ones * zeros;
        }

        return ans;
    }
};