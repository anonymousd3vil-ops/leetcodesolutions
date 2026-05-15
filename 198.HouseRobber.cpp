//first submission

class Solution:
    def rob(self, nums: List[int]) -> int:
        sum1 = 0
        sum2 = 0

        for i in range(len(nums)):
            temp = max(sum1, sum2+nums[i])

            sum2 = sum1
            sum1 = temp

        return sum1