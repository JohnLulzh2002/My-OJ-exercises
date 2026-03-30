class Solution:
    def constructProductMatrix(self, grid: list[list[int]]) -> list[list[int]]:
        ans=[[0 for y in x]for x in grid]
        m=len(grid)
        n=len(grid[0])
        prefix=[0]*(m*n)
        suffix=[0]*(m*n)
        p=s=1
        for i in range(m):
            for j in range(n):
                pos=i*n+j
                p=p*grid[i][j]%12345
                prefix[pos]=p
                s=s*grid[-i-1][-j-1]%12345
                suffix[-pos-1]=s
        for i in range(m):
            for j in range(n):
                pos=i*n+j
                p=1
                if pos>0:
                    p*=prefix[pos-1]
                if pos+1<n*m:
                    p*=suffix[pos+1]
                ans[i][j]=p%12345
        return ans
if __name__ == '__main__':
    s=Solution()
    print(s.constructProductMatrix([[1,2],[3,4]]))
    print(s.constructProductMatrix([[12345],[2],[1]]))