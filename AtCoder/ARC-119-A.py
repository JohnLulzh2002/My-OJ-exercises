n=int(input())
p=1
ans=1e18
for b in range(61):
    t=n//p+b+n%p
    ans=min(ans,t)
    p*=2
print(ans)