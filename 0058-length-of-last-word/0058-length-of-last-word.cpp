class Solution {
public:
    int lengthOfLastWord(string s) {
        int e = s.size()-1 , cnt = 0;
        while(s[e] == ' ' && e>0)
         e--;

        while(e >= 0 && s[e] != ' ' )
        {
            cnt++;
            e--;
        } 
        return cnt;
    }
};