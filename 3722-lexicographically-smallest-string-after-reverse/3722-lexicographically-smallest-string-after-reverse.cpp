class Solution {
public:
    string lexSmallest(string s) {
        string str, ans=s;
        for(int i=0;i<s.size();i++)
        {
            str = s;
            reverse(str.begin(),str.begin()+i+1);
            ans = min(ans,str);
            str = s;
            reverse(str.begin()+i+1,str.end());
            ans = min(ans,str);
        }
        return ans;
    }
};