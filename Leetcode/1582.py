class Solution:
    def numSpecial(self, mat) -> int:
        rows=[sum(x)for x in mat]
        cols=[sum((y[x]for y in mat))for x in range(len(mat[0]))]
        ans=sum([
            mat[i][j]==rows[i]==cols[j]==1
            for i in range(len(mat))
            for j in range(len(mat[0]))
        ])
        return ans
if __name__ == '__main__':
    s=Solution()
    print(s.numSpecial([[1,0,0],[0,0,1],[1,0,0]]))