class Solution:
    def minSwaps(self, grid: list[list[int]]) -> int:
        def countRight0(arr:list[int]):
            for i,n in enumerate(reversed(arr)):
                if n!=0:
                    return i
            return len(arr)
        arr=[countRight0(x) for x in grid]
        ans=0
        for i in range(len(arr)):
            r=-1
            for j in range(i,len(arr)):
                if arr[j]>=len(arr)-i-1:
                    r=j
                    break
            if r==-1:
                return -1
            else:
                arr[i:r+1]=[arr[r]]+arr[i:r]
                # val = arr.pop(r)
                # arr.insert(i, val)
                ans+=r-i
        return ans
if __name__ == '__main__':
    s=Solution()
    print(s.minSwaps([[0,0,1],[1,1,0],[1,0,0]]))
    print(s.minSwaps([[1,0,0,0],[1,1,1,1],[1,0,0,0],[1,0,0,0]]))