class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans = []
        p = 0
        for i in nums:

            index = abs(nums[p])-1
            p = p + 1

            if(nums[index]<0):
                ans.append(index+1)
            
            else:
                nums[index] = -nums[index]
        
        return ans
            
