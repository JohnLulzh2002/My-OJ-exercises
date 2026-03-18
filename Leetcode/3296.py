import heapq
class Solution:
    def minNumberOfSeconds(self, mountainHeight: int, workerTimes: list[int]) -> int:
        workers=[(x,x,2)for x in workerTimes]
        heapq.heapify(workers)
        for i in range(mountainHeight):
            x,y,z=heapq.heappop(workers)
            heapq.heappush(workers,(x+y*z,y,z+1))
        return max([x-y*(z-1) for x,y,z in workers])
if __name__ == '__main__':
    s=Solution()
    print(s.minNumberOfSeconds(4,[2,1,1]))
    print(s.minNumberOfSeconds(10,[3,2,2,4]))
    print(s.minNumberOfSeconds(5,[1,5]))