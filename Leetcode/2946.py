class Solution:
    def areSimilar(self, mat: list[list[int]], k: int) -> bool:
        c=len(mat[0])
        for i,r in enumerate(mat):
            for j in range(c):
                if i%2==0:
                    if r[j]!=r[(j+k)%c]:
                        return False
                else:
                    if r[j]!=r[(j-k)%c]:
                        return False
        return True
if __name__ == '__main__':
    s=Solution()
    print(s.areSimilar([[1,2,1,2],[5,5,5,5],[6,3,6,3]], 2))
    print(s.areSimilar([[1,2]], 1))