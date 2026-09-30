class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1, m2;
        for (auto x : nums1)
            m1[x]++;
        for (auto x : nums2)
            m2[x]++;

        vector<int> ans;

        for (auto it : m1)
            if(m2.count(it.first)) ans.push_back(it.first);

        return ans;    
    }
};