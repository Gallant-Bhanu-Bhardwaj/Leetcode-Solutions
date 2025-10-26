class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i=0;i<s.size();i++)
        {
            if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') )
             str += (char)tolower(s[i]);
        }

        int start = 0, end = str.size()-1;
        while(start <= end)
         { 
            if(str[start] != str[end])
             return false;

            start++;
            end--;
         }
         return true;
    }
};