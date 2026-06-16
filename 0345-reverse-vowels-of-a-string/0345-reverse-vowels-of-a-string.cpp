class Solution {
public:
bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u';
}
    string reverseVowels(string s) {
        int st = 0, e = s.size()-1;
        while(st<=e)
        {
            if(isVowel(s[st]) && isVowel(s[e]))
            {
                swap(s[st++],s[e--]);
            }
            else if (isVowel(s[st]) && !isVowel(s[e]))
            {
                e--;
            }
            else if(!isVowel(s[st]) && isVowel(s[e]))
            {
                st++;
            }
            else
            {
                st++;
                e--;
            }
        }
        return s;
    }
};