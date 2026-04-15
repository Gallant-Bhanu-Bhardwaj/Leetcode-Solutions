class Solution {
public:
    vector<int> countBits(int n) {
       int cnt = 1, i=0;
       vector<int> ans(n+1,0);
        while(i<=n)
       {
        ans[i] = __builtin_popcount(i);
        i++;
       } 
       return ans;
    }
};