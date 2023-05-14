class Solution:
    def isValid(self, s: str) -> bool:
        while 'abc' in s:
            s=s.replace('abc','')
        return s==''