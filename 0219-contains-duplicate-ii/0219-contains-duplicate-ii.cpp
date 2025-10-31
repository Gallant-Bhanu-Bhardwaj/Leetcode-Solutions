class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       vector<pair<int, int>> v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i], i});

        }
        bool ans=false;
        sort(v.begin(),v.end());
        for(int i=1;i<nums.size();i++)
        {
            if(v[i].first == v[i-1].first && v[i].second-v[i-1].second <= k)
            {
                ans = true;
                break;
            }
        }
        return ans;
    }
};