class Solution:
    def closestTarget(self, words: list[str], target: str, startIndex: int) -> int:
        ans=1e9
        n=len(words)
        for i,w in enumerate(words):
            if w==target:
                ans=min(ans,abs(i-startIndex),i+n-startIndex,startIndex+n-i)
        return ans if ans<1e8 else -1
if __name__ == '__main__':
    s=Solution()
    print(s.closestTarget(["hello","i","am","leetcode","hello"], "hello", 1))