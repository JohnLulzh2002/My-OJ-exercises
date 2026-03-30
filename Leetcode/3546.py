class Solution:
    def canPartitionGrid(self, grid: list[list[int]]) -> bool:
        rows=[sum(x)for x in grid]
        cols=[sum([x[i] for x in grid]) for i in range(len(grid[0]))]
        def canSep(a:list):
            prefix=[0 for x in a]
            suffix=[0 for x in a]
            r=range(len(a))
            s=0
            for i in r:
                s+=a[i]
                prefix[i]=s
            s=0
            for i in reversed(r):
                s+=a[i]
                suffix[i]=s
            for i in range(len(a)-1):
                if prefix[i]==suffix[i+1]:
                    return True
            return False
        return canSep(rows) or canSep(cols)
if __name__ == '__main__':
    s=Solution()
    print(s.canPartitionGrid([[1,4],[2,3]]))
    print(s.canPartitionGrid([[1,3],[2,4]]))