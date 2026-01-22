class Solution:
    def minimumPairRemoval(self, nums: list[int]) -> int:
        def noneDescend(arr: list[int]):
            for i in range(len(arr)-1):
                if arr[i]>arr[i+1]:
                    return False
            return True
        ans=0
        while not noneDescend(nums):
            ans+=1
            minSumS,minSumI=1e5,-1
            for i in range(len(nums)-1):
                if nums[i]+nums[i+1]<minSumS:
                    minSumS,minSumI=nums[i]+nums[i+1],i
            nums=nums[:minSumI]+[minSumS]+nums[minSumI+2:]
            # print(*nums)
        return ans
if __name__ == '__main__':
    s=Solution()
    print(s.minimumPairRemoval([5,2,3,1]))
    print(s.minimumPairRemoval([1,1,4,4,2,-4,-1]))