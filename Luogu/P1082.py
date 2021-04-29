def exgcd(a,b):
    if not b:
        return 1,0
    x,y=exgcd(b,a%b)
    return y,x-a//b*y
def inv(n,p):
    return exgcd(n,p)[0]%p
a,b=[int(x)for x in input().split()]
print(inv(a,b))