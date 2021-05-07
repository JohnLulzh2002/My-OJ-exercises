try:
    while True:
        n,m=[int(x)for x in input().split()]
        if n%2==0 and n//2>=m:
            print('Yes')
        else:
            print('No')
except EOFError:
    pass