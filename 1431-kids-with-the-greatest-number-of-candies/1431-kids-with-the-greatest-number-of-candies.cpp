class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcandies = *max_element(candies.begin(),candies.end());
        int n = candies.size();
        vector<bool> ans(n,false);
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i] + extraCandies >= maxcandies)
             ans[i] = true;
            else
             ans[i] = false; 
        }

        return ans;
    }
};