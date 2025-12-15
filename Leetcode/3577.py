from math import factorial
class Solution:
    def countPermutations(self, complexity: list[int]) -> int:
        c0,c=complexity[0],complexity[1:]
        if c0<min(c):
            return factorial(c.__len__()) % int(1e9+7)
        else:
            return 0
s=Solution()
print(s.countPermutations([1,2,3]))
print(s.countPermutations([3,3,3,4,4,4]))