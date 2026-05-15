#submission four
class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        ans = ""

        for word in words:
            total = 0
            for c in word:
                total += weights[ord(c) - ord('a')]
            
            total %= 26
            ans += chr(ord('z') - total)

        return ans
        