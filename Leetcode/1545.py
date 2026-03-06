class Solution:
    def findKthBit(self, n: int, k: int) -> str:
        if n==1:
            return '0'
        l=2**(n-1)-1
        if k<=l:
            return self.findKthBit(n-1,k)
        if k==l+1:
            return '1'
        rev={'1':'0','0':'1'}
        return rev[self.findKthBit(n-1,2*l+2-k)]
if __name__ == '__main__':
    s=Solution()
    print(s.findKthBit(3,1))
    print(s.findKthBit(4,11))