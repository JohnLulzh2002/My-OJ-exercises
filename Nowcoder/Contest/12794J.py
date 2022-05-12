n=int(input())
for i in range(1,n+1):
    a,b=[int(x,16)for x in input().split()]
    while a!=b:
        if a>b:
            a//=2
        if b>a:
            b//=2
    print("Case #{:d}: {:s}\n".format(i,hex(a)[2:]))