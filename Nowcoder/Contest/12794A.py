n=int(input())
p=[pow(2,x)for x in range(100)]
while n:
    n-=1
    a=int(input())
    print('Input value: '+str(a))
    if a in p:
        print(a)
        print()
        continue
    b=1
    while a:
        a//=2
        b*=2
    print(b)
    print()