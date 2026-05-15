class Solution:
    def reverseNum(self, n: int) -> int:
        ans = 0
        while(n):
            ans = ans*10 + n%10
            n = n//10;

        return ans
        
    def mirrorDistance(self, n: int) -> int:
        return abs(n - self.reverseNum(n))