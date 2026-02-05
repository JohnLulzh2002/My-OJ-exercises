class Solution:
    def constructTransformedArray(self, nums: list[int]) -> list[int]:
        ans=[nums[(i+nums[i])%len(nums)] for i in range(len(nums))]
        return ans
if __name__ == '__main__':
    s=Solution()
    print(s.constructTransformedArray([3,-2,1,1]))
