import itertools
class Solution:
    def countSubmatrices(self, grid: list[list[int]], k: int) -> int:
        prefix=[list(itertools.accumulate(x))for x in grid]
        ans=0
        for i in range(len(grid[0])):
            s=0
            for j in range(len(grid)):
                s+=prefix[j][i]
                if s<=k:
                    ans+=1
                else:
                    break
        return ans

if __name__ == '__main__':
    s=Solution()
    print(s.countSubmatrices([[7,6,3],[6,6,1]], 18))