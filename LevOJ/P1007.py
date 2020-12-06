n=int(input())
while n>0:
    a,b,c=[int(x) for x in input().split()]
    if a<b:
        a+=b
        b=a-b
        a-=b
    while a%b:
        t=a%b
        a=b
        b=t
    if c<b:
        c+=b
        b=c-b
        c-=b
    while c%b:
        t=c%b
        c=b
        b=t
    print(b)
    n-=1