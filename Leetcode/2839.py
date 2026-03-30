class Solution:
    def canBeEqual(self, s1: str, s2: str) -> bool:
        def pairEqual(a,b):
            if a[0]==b[0] and a[1]==b[1]:
                return True
            if a[0]==b[1] and a[1]==b[0]:
                return True
            return False
        return pairEqual(s1[::2],s2[::2]) and pairEqual(s1[1::2],s2[1::2])
if __name__ == '__main__':
    s=Solution()
    print(s.canBeEqual("abcd", "cdab"))
    print(s.canBeEqual("abcd", "dacb"))