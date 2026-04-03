class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        left1 = 0
        right1 = m-1
        left2 = 0
        right2 = n-1

        temp = []

        while(right1>=left1 and left2<= right2):
            if(nums1[left1]<=nums2[left2]):
                temp.append(nums1[left1])
                left1 = left1 + 1
            
            else:
                temp.append(nums2[left2])
                left2 = left2 + 1
            
        while(right1>=left1):
            temp.append(nums1[left1])
            left1 = left1 + 1
        
        while(left2<= right2):
            temp.append(nums2[left2])
            left2 = left2 + 1

        p = 0
        for i in temp:
            nums1[p] = i
            p = p+1



        