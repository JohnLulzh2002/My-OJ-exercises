from math import gcd
a,b=[int(x)for x in input().split()]
c=gcd(a,b)
a//=c
b//=c
if a%2 and b%2:
    print(c)
else:
    print(0)