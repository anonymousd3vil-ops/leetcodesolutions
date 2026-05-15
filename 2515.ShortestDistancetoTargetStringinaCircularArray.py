//submission two

class Solution:
    def closestTarget(self, words: List[str], target: str, startIndex: int) -> int:
        n = len(words)
        ans = math.inf
        
        for i in range(n):
            if(words[i]==target):
                forward = (i-startIndex+n)%n
                backward= (startIndex-i+n)%n
                
                ans = min(ans, min(forward, backward))
                
        
        if(ans == math.inf):
            return -1
        else:
            return ans