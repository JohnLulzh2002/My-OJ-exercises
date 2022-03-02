s=sorted(input())
c=[0 for x in range(26)]
for i in s:
    c[ord(i)-ord('a')]+=1
minn,maxn=100,0
for i in c:
    if i:
        minn=min(minn,i)
        maxn=max(maxn,i)
d=maxn-minn
ans=d>1
for i in range(2,d):
    if d%i==0:
        ans=False
if ans:
    print('Lucky Word')
    print(d)
else:
    print('No Answer')
    print(0)