class Solution:
    @staticmethod
    def valToTuple(n:int):
        return(n if n<0 else 0, n if n>0 else 0)
    @staticmethod
    def updateTuple(a,b):
        if b[0]>b[1]:
            b[0],b[1]=b[1],b[0]
        l=a[0] if a[0]<b[0] else b[0]
        r=a[1] if a[1]>b[1] else b[1]
        return (l,r)
    def maxProductPath(self, grid: list[list[int]]) -> int:
        m=len(grid)
        n=len(grid[0])
        prod=[[(0,0)for y in x]for x in grid]
        prod[0][0]=self.valToTuple(grid[0][0])
        for i in range(m):
            for j in range(n):
                if i==0 and j==0:
                    continue
                p=(0,0)
                gij=grid[i][j]
                if i>0:
                    a,b=prod[i-1][j]
                    a*=gij
                    b*=gij
                    p=self.updateTuple(p,(a,b))
                if j>0:
                    a,b=prod[i][j-1]
                    a*=gij
                    b*=gij
                    p=self.updateTuple(p,(a,b))
        # for r in prod:
        #     print(' '.join((str(x)for x in r)))
        ans=prod[-1][-1][1]
        if ans>0:
            return ans%1000000007
        for x in grid:
            for y in x:
                if y==0:
                    return 0
        return -1
if __name__ == '__main__':
    s=Solution()
    print(s.maxProductPath([[-1,-2,-3],[-2,-3,-3],[-3,-3,-2]]))
    print(s.maxProductPath([[1,-2,1],[1,-2,1],[3,-4,1]]))