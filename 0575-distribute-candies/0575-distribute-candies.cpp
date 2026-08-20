class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        set<int> st;
        for(auto x : candyType)
         st.insert(x);

         int type = st.size();
         return min(type,n/2);
    }
};