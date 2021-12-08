n=int(input())
s=input()
def f(s):
    a=[0 for x in range(26)]
    exist=[]
    for i in s[::-1]:
        if not (i in exist):
            a[ord(i)-ord('a')]=len(exist)
            exist.append(i)
    return map(lambda x:chr(ord('a')+a[ord(x)-ord('a')]),s)
ff=[]
for i in range(len(s)):
    ff.append(list(f(s[:i+1])))
ff.sort()
print(''.join(ff[-1]))