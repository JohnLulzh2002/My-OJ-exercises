from math import ceil
for i in range(int(input())):
    k,x,y=map(int,input().split())
    ps=[1]
    while ps[-1]<1e18:
        ps.append(ps[-1]*(k+1))
    ps.reverse()
    ps.append(0)
    # print(*ps)
    xs=[x]
    ys=[y]
    while xs[-1]!=1:
        x=xs[-1]
        j=0
        while ps[j]>x:
            j+=1
        x-=ps[j]
        x=ceil(x/k)
        xs.append(x)
    while ys[-1]!=1:
        y=ys[-1]
        j=0
        while ps[j]>y:
            j+=1
        y-=ps[j]
        y=ceil(y/k)
        ys.append(y)
    xs.reverse()
    ys.reverse()
    j=0
    lx=len(xs)
    ly=len(ys)
    while j<lx and j<ly and xs[j]==ys[j]:
        j+=1
    print(xs[j-1])