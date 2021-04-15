def stirling(n,m):
    if m<1 or n<m:
        return 0
    if n==m:
        return 1
    return stirling(n-1,m-1)+m*stirling(n-1,m)
n,r=[int(x)for x in input().split()]
ans=stirling(n,r)
while r:
    ans*=r
    r-=1
print(ans)