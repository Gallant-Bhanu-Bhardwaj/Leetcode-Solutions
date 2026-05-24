class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        sums = 0
        for val in s:
            sums += ord(val)

        sumt = 0
        for val in t:
            sumt += ord(val)

        return chr(sumt-sums)