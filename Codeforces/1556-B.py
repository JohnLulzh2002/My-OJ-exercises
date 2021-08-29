t=int(input())
for i in range(t):
    n=int(input())
    a=[int(x)%2 for x in input().split()]
    oneCount=sum(a)
    # print(a)
    # print(n,oneCount)
    if oneCount*2>n+1 or oneCount*2<n-1:
        print(-1)
        continue
    ones=[]
    for j in range(n):
        if a[j]:
            ones.append(j)
    ans=1e20
    if oneCount*2==n+1 or oneCount*2==n:
        need=range(0,n,2)
        ans=min(ans,sum(map(lambda x,y:abs(x-y),ones,need)))
    if oneCount*2==n-1 or oneCount*2==n:
        need=range(1,n,2)
        ans=min(ans,sum(map(lambda x,y:abs(x-y),ones,need)))
    print(ans)