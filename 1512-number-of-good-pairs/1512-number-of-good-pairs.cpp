class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        int cnt = 0;
        for (int x : nums) {
            cnt += freq[x]; 
            freq[x]++;
        }
        return cnt;
    }
};
