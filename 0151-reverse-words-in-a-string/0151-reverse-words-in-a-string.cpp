class Solution {
public:
    string reverseWords(string s) {
         int n = s.length(), st = 0, end = 0, i = 0;
         reverse(s.begin(),s.end());
         while(i<n)
         {
            while(i<n && s[i] == ' ')i++;

            if(i==n) break;

            while(i<n && s[i] != ' ')
             s[end++]=s[i++];

            reverse(s.begin()+st,s.begin()+end);

            s[end++] = ' ';
            st = end;
            i++;
         }
         if(end>0 && s[end-1] == ' ')end--;
         s.resize(end);
         return s;
    }
};