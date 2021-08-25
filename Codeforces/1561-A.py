t=int(input())
for i in range(t):
    n=int(input())
    a=[int(x)for x in input().split()]
    e=list(range(1,n+1))
    ans=0
    while a!=e:
        for j in range(ans%2,n-1,2):
            if a[j]>a[j+1]:
                a[j],a[j+1]=a[j+1],a[j]
        ans+=1
    print(ans)