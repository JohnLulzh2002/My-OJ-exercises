s=[[int(x)for x in input().split()]for _ in range(4)]
d=[]
for i in range(int(input())):
    # for j in s:
    #     print('*',*sorted(j))
    # print('#',*sorted(d))
    q=i%4
    # print('q=',q)
    p=(q-1)%4
    a=input().split()
    t=a[0]
    if t=='S':
        a=[int(_)for _ in a[1:]]
        x=a[0]
        y=a[1]
        a=a[2:]
        # print(a)
        d=a.copy()
        dd=a
        for j in a:
            s[q].remove(j)
    elif t=='!':
        a=[int(_)for _ in a[1:]]
        y=a[0]
        a=a[1:]
        d+=a
        dd=a
        for j in a:
            s[q].remove(j)
    else:
        yp=dd.count(x)
        # print('x=',x,'y=',y,yp)
        if yp!=y:
            s[p]+=d
            # print('^p=',p)
            d=[]
        else:
            s[q]+=d
            # print('^q=',q)
            d=[]
for j in s:
    print(*sorted(j))