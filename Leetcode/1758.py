class Solution:
    def minOperations(self, s: str) -> int:
        a1=a2=0
        for i,c in enumerate(s):
            if int(c)==i%2:
                a1+=1
            else:
                a2+=1
        return min(a1,a2)
if __name__ == '__main__':
    s=Solution()
    print(s.minOperations("0100"))