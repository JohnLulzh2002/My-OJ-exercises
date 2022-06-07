t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,list(input())))
    b=list(map(int,list(input())))
    ans=0
    for j in range(n):
        if b[j]==0:
            continue
        if j>0 and a[j-1]==1:
            ans+=1
            continue
        if a[j]==0:
            ans+=1
            a[j]=2
            continue
        if j<n-1 and a[j+1]==1:
            ans+=1
            a[j+1]=2
    print(ans)