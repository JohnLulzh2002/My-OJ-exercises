n=int(input())
x=sorted([int(i)for i in input().split()])
ans=1e9
for i in range(x[0],x[-1]+1):
    s=0
    for j in x:
        s+=(i-j)**2
    ans=min(ans,s)
print(ans)