from math import comb
from math import perm
t=int(input())
for i in range(t):
    n,m=sorted([int(x)for x in input().split()])
    ans=0
    for j in range(n+1):
        ans+=comb(n,j)*perm(m,j)
        ans%=10005
    print(ans)