//submission 1

class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        nums.sort()
        max = 0

        for i in range(0, len(nums)-1):
            diff = nums[i+1] - nums[i]
            if (diff>max):
                max=diff


        return max
        