def factor(x:int):
    f=lambda y:x%y==0
    d=filter(f,range(2,x))
    d=list(d)
    return d
t=int(input())
for i in range(t):
    n,m=map(int,input().split())
    c=0
    for j in range(1,m+1):
        if n%j==0:
            c+=1
            if c==2:
                break
    print('Yes'if c==2 else 'No')