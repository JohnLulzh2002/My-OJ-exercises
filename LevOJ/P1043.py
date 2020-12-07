try:
    while 1:
        a=[int(x) for x in input().split()]
        a.sort()
        if a[0]+a[1]>a[2] and a[0]*a[0]+a[1]*a[1]==a[2]*a[2]:
            print("yes")
        else:
            print("no")
except EOFError:
    pass