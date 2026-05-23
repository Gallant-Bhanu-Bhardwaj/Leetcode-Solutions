class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        lst = [0]*26
        if len(s) != len(t):
            return False
        i = 0
        while i < len(s):
            lst[ord(s[i])-ord('a')]+=1
            lst[ord(t[i])-ord('a')]-=1
            i+=1

        for i in lst:
            if i != 0:
                return False
        
        return True
        