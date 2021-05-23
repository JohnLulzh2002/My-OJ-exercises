input()
a=[int(x)for x in input().split()]
b=[int(x)for x in input().split()]
la=len(a)
for n in b:
    l,r=0,la-1
    while l<r:
        m=(l+r)//2
        if n<a[m]:
            r=m-1
        elif n==a[m]:
            r=m
        else:
            l=m+1
    if a[l]==n:
        print(l+1,end=' ')
    else:
        print(-1,end=' ')