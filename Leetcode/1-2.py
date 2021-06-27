class Solution:
    def twoSum(self,nums,target):
        for i in range(len(nums)-1):
            a=nums[i]
            nums[i]=1e10
            if (target-a)in nums:
                return [i,nums.index(target-a)]
            nums[i]=a