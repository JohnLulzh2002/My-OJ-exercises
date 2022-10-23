for i in range(int(input())):
    n,x,t=map(int,input().split())
    ans=2*n*t
    if ans-2*t>=x:
        print(4*n*t)
    elif ans-t>=x:
        print(4*n*t+x-(ans-2*t))
    elif ans>=x:
        print(4*n*t+t)
    else:
        print(4*n*t+t+x-ans)