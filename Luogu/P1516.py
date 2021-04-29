def gcd(a,b):
    if not b:
        return a
    return gcd(b,a%b)
def exgcd(a,b):
    if not b:
        return 1,0
    x,y=exgcd(b,a%b)
    return y,x-a//b*y
def inv(n,p):
    return exgcd(n,p)[0]%p

x,y,m,n,l=[int(x)for x in input().split()]
x=(y-x)%l
v=(m-n)%l
t=gcd(gcd(x,v),l)
x//=t
v//=t
l//=t
if x%gcd(v,l)==0:
    print((x*inv(v,l))%l)
else:
    print('Impossible')