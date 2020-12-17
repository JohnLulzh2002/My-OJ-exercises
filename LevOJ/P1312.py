try:
    while 1:
        a,b=[int(x)for x in input().split()]
        if a<b or b<0:
            print(0)
            continue
        if b*2>a:
            b=a-b
        ans=1
        for i in range(b):
            ans*=a-i
        for i in range(2,b+1):
            ans/=i
        print(int(ans))
except EOFError:
    pass