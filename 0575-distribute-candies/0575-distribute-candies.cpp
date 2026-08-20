class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_map<int,int> mp;

        for(int x : candyType)
         mp[x]++;

        return  min(n/2,static_cast<int>(mp.size())); 
    }
};