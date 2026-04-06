//first submission
class Solution:
    def findGoodIntegers(self, n: int) -> list[int]:
        cubes = {}

        i = 1

        while i**3<=n:
            j = i
            while i**3 + j**3 <= n:
                x = j**3 + i**3
                cubes[x] = cubes.get(x, 0) + 1
                j += 1

            i += 1
        
        ans = []

        for key, value in cubes.items():
            if value>=2:
                ans.append(key)
        
        ans.sort()
        return ans