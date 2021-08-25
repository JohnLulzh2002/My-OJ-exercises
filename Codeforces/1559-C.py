for i in range(int(input())):
    n=int(input())
    a=[int(x)for x in input().split()]
    if a[-1]==0:
        for j in range(1,n+2):
            print(j,end=' ')
        print()
        continue
    if a[0]==1:
        print(n+1,end=' ')
        for j in range(1,n+1):
            print(j,end=' ')
        print()
        continue
    t=True
    for i in range(n-1):
        if a[i]==0 and a[i+1]==1:
            for j in range(1,i+2):
                print(j,end=' ')
            print(n+1,end=' ')
            for j in range(i+2,n+1):
                print(j,end=' ')
            t=False
            break
    if t:
        print(-1,end='')
    print()