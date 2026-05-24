class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        sum = 0
        for i in nums:
            sum += i
        total_sum = int((n*(n+1))/2)
        return total_sum - sum
        