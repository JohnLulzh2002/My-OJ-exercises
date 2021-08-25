from math import sqrt
t=int(input())
for i in range(t):
    k=int(input())
    n=int(sqrt(k))
    if n*n==k:
        print(n,' 1',sep='')
    else:
        k-=n*n
        if k<n+2:
            print(k,' ',n+1,sep='')
        else:
            print(n+1,' ',2*n+2-k,sep='')