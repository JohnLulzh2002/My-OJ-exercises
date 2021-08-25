t=int(input())
for i in range(t):
    a,b=sorted([int(x)for x in input().split()])
    d=b-a
    if d==0:
        ans=range(0,a+b+1,2)
    elif d==1:
        ans=range(a+b+1)
    elif((b+a)%2==1):
        tot=2+a*2
        ans=range(d//2,d//2+tot)
    else:
        tot=a+1
        ans=range(d//2,d//2+2*tot,2)
    print(len(ans))
    for j in ans:
        print(j,end=' ')
    print()