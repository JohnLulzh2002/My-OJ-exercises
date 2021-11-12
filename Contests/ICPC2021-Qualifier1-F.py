from math import sqrt
t=int(input())
for i in range(t):
    a,b,r=[int(x)for x in input().split()]
    if b<=r:
        ans=2*a-r
    else:
        ans=sqrt(a*a+(b-r)*(b-r))*2-r
    print('Case #{:d}: {:.2f}'.format(i+1,ans))