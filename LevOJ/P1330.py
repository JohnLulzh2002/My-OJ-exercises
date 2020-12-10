try:
    while 1:
        n=int(input())
        a=[int(x) for x in input().split()]
        m=int(input())
        b=[int(x) for x in input().split()]
        a.sort()
        b.sort()
        for x in a:
            t=True
            for y in b:
                if x==y:
                    t=False
                    break
            if t:
                print(x,end=" ")
        print()
except EOFError:
    pass