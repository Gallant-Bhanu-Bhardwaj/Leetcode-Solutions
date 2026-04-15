class Solution {
public:
    char findTheDifference(string s, string t) {
        int cnt1 = 0 , cnt2 = 0, i=0,j=0;
        while(i<s.size())
        {
            cnt1 += s[i]-'a'; 
            i++;
        }
        while(j<t.size())
        {
            cnt2 += t[j]-'a';
            j++;
        }
        if(s.size() > t.size())
         return 'a' + cnt1-cnt2;
        else
         return 'a' + cnt2-cnt1;
    }
};