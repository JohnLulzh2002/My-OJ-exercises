n=int(input())
ans=1
t=1
for i in range(2,n+1):
    t*=i
    ans+=t
print(ans)