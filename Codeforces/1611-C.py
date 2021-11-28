t=int(input())
for i in range(t):
    n=int(input())
    a=[int(x)for x in input().split()]
    if a[0]==n:
        print(n,end=' ')
        for j in a[::-1][:-1]:
            print(j,end=' ')
        print()
    elif a[-1]==n:
        for j in a[::-1][1:]:
            print(j,end=' ')
        print(n)
    else:
        print(-1)