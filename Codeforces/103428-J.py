from math import gcd
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    print(180*b//gcd(180*b,a)-1)