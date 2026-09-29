class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int m = str1.size(), n = str2.size();
        string res = "";
        if(str1+str2 == str2+str1) res += str1.substr(0,gcd(m,n));
        return res;
    }
};