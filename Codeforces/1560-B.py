t=int(input())
for i in range(t):
    a,b,c=[int(x)for x in input().split()]
    if a>b:
        a,b=b,a
    d=b-a
    if d*2<b or d*2<c :
        print(-1)
    else:
        ans=c-d
        if ans<1:
            ans=c+d
        print(ans)