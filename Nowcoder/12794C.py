n=int(input())
while n:
    n-=1
    a=int(input())
    a_0=a
    print('Input cost: '+str(a))
    a*=1.2
    if a>int(a):
        a=int(a)+1
    else:
        a=int(a)
    t=True
    while t:
        b=str(a)
        t=False
        for i in range(len(b)):
            if b[i]!=b[-1-i]:
                t=True
                break
        a+=1
    a-=1
    a_0=a-a_0
    print(str(a_0)+' '+str(a))
    print()