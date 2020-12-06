try:
    while 1:
        n=int(input())
        i=2
        while i*i<=n:
            if n%i==0:
                print("No")
                break
            i+=1
        if i*i>n:
            print("Yes")
except EOFError:
    pass