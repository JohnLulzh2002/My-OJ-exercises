import math
try:
    while 1:
        a,b,c=[int(x) for x in input().split()]
        print(math.gcd(math.gcd(a,b),c))
except EOFError:
    pass