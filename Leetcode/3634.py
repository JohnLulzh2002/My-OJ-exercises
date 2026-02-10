import bisect
class Solution:
    def minRemoval(self, nums: list[int], k: int) -> int:
        nums.sort()
        ans=1e6
        for l in range(len(nums)):
            r=bisect.bisect(nums,nums[l]*k)
            ans=min(ans,l+len(nums)-r)
        return ans
if __name__ == '__main__':
    s=Solution()
    print(s.minRemoval([2,1,5], 2))
