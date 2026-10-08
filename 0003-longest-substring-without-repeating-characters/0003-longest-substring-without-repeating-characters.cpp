class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0 , start =-1;
        vector<int> dict(256,-1);
        for(int i=0;i<s.length();i++)
        {   
            char ch = s[i];
            if(start < dict[ch])
                start = dict[ch];

            dict[ch] = i;
            maxLen = max(maxLen, i-start);    
        }
        return maxLen;
    }
};