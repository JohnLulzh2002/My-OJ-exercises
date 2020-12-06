while 1:
    try:
        a,b=input().split()
        a=int(a)
        b=int(b)
        print(a+b)
    except EOFError:
        break