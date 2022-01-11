t=int(input())
for i in range(t):
    n=int(input())
    a=[int(x)for x in input().split()]
    fff=True
    for j in range(n,0,-1):
        f=False
        for k in a:
            tk=k
            while tk and not f:
                if tk==j:
                    a.remove(k)
                    f=True
                    break
                tk//=2
            if f:
                break
        if not f:
            fff=False
            break
    print(('NO','YES')[fff])