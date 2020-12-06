n=int(input())
while n:
    n-=1
    a,b=[int(x) for x in input().split()]
    if a<b:
        a+=b
        b=a-b
        a-=b
    c=a
    while a%b:
        a+=c
    print(a)