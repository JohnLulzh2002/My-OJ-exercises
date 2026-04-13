class Solution:
    def getMinDistance(self, nums: list[int], target: int, start: int) -> int:
        return min(map(lambda x:abs(x[0]-start), filter(lambda x:x[1]==target, enumerate(nums))))
if __name__ == '__main__':
    s=Solution()
    print(s.getMinDistance([1,2,3,4,5], 5, 3))