class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        sum = 0

        for n in nums:
            sum += n
        
        left = 0

        for i in range(0, len(nums)):
            if(left == sum - left - nums[i]):
                return i
            
            left += nums[i]
        
        return -1