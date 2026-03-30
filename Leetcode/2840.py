class Solution:
    def checkStrings(self, s1: str, s2: str) -> bool:
        def pairEqual(a,b):
            return sorted(a)==sorted(b)
        return pairEqual(s1[::2],s2[::2]) and pairEqual(s1[1::2],s2[1::2])
if __name__ == '__main__':
    s=Solution()
    print(s.checkStrings("abcdba", "cabdab"))
    print(s.checkStrings("abe", "bea"))