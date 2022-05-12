n=int(input())
def f():
    s=input().strip('$')
    for i in range(len(s)):
        if s[i]=='.':
            return int(s[:i]+s[i+1:])
a=f()
ans=0
for i in range(n):
    a+=f()
    if a%100:
        ans+=1
print(ans)