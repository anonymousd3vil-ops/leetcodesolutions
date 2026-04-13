class Solution:
    def countDigitOccurrences(self, nums: list[int], digit: int) -> int:
        count = 0

        for n in nums:
            if(n==0 and digit == 0):
                count += 1
            while(n!=0):
                last = n%10
                if(last == digit):
                    count += 1

                n //= 10
            
        return count