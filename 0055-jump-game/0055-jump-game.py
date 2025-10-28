class Solution:
    def canJump(self, nums: List[int]) -> bool:
        mx=0
        if len(nums)==1: return True
        for i in range(len(nums)):
            if nums[i]==0 and mx<=i:
                return False
            mx=max(mx,i+nums[i])
            if mx>=len(nums)-1:
                return True
        if mx>=len(nums)-1: return True
        return False