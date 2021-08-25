for i in range(int(input())):
    n=int(input())
    a=[int(x)for x in input().split()]
    ans=a[0]
    for j in a:
        ans&=j
    print(ans)