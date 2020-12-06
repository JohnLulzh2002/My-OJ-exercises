n=int(input())
while n>0:
    a,b=input().split()
    a=int(a)
    b=int(b)
    if a<b:
        a+=b
        b=a-b
        a-=b
    while a%b:
        c=a%b
        a=b
        b=c
    print(b)
    n-=1