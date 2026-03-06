class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        ans=0
        for i in range(len(s)-1):
            if s[i]=='1' and s[i+1]=='0':
                ans+=1
        if s[-1]=='1':
            ans+=1
        return ans<2
if __name__ == '__main__':
    s=Solution()
    print(s.checkOnesSegment("1001"))