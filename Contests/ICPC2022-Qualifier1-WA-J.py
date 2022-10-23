def gcd(a:int,b:int):
    if a%b==0:
        return b
    return gcd(b,a%b)
x,y=map(int,input().split())
u=x+2-2*y
d=x
g=gcd(u,d)
print(u//g,d//g)
for i in range(x-1):
    print(1,x-1-i)