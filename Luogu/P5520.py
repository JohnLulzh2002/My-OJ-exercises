t,n,m,p=[int(x)for x in input().split()]
if n+1<m*2:
    ans=0
else:
    ans=1
    for i in range(m):
        ans*=n-m+1-i
        ans%=p
print(ans)