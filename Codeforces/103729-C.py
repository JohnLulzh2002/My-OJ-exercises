T=int(input())
def gcd(a:int,b:int)->int:
    if b==0:
        return a
    return gcd(b,a%b)
for TTT in range(T):
    x,y,a,b=map(int,input().split())
    g=gcd(x,y)
    x//=g
    y//=g
    g=gcd(a,b)
    a//=g
    b//=g
    s=a+b
    p=[1]
    while p[-1]<2e19:
        p.append(p[-1]*s)
    ans=2
    t=False
    while x+y>s:
        # print('*',x,y,sep='\t')
        if x+y not in p:
            t=True
            break
        i=0
        while p[i]<x+y:
            i+=1
        g=p[i-1]
        if(x>b*g and (x-b*g)%a==0):
            x=(x-b*g)//a
            y=y//a
        elif(y>b*g and (y-b*g)%a==0):
            x=x//a
            y=(y-b*g)//a
        else:
            t=True
            break
        ans+=1
    aa=((a,b),(b,a))
    if t or (x,y) not in aa:
        print(-1)
    else:
        print(ans)