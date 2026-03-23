class Solution:
    def numberOfSubmatrices(self, grid: list[list[str]]) -> int:
        prefix:list[list[tuple[int,int]]]=[[]for x in grid]
        m,n=len(grid),len(grid[0])
        for i in range(m):
            xc=yc=0
            for j in range(n):
                if grid[i][j]=='X':
                    xc+=1
                elif grid[i][j]=='Y':
                    yc+=1
                prefix[i].append((xc,yc))
        ans=0
        for i in range(n):
            xc=yc=0
            for j in range(m):
                dx,dy=prefix[j][i]
                xc+=dx
                yc+=dy
                if xc>0 and xc==yc:
                    ans+=1
        return ans

if __name__ == '__main__':
    s=Solution()
    print(s.numberOfSubmatrices([["X","Y","."],["Y",".","."]]))