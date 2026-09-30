class Solution {
public:
    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k) {
        int i=0,j=k, count = 0;
        for(int l=0;l<k;l++)
        {
            char ch = s[l];
            if(isVowel(ch)) count++;
        }
        int maxcount = count;
        while(j<s.length())
        {
            char ch = s[i++];
            char ch1 = s[j++];
            if(isVowel(ch)) count--;
            if(isVowel(ch1)) count++;

            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};