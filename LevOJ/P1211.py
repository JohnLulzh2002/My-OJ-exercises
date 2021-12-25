t=int(input())
for j in range(t):
    a=sorted([int(x)for x in input().split()[1:]])
    m=(a[0]+a[-1])/2
    l=r=0
    for i in a:
        if i<m:
            l=i
        else:
            r=i
            break
    if r>0:
        if r-m>m-l:
            print(l)
        else:
            print(r)
    else:
        print(a[-1])