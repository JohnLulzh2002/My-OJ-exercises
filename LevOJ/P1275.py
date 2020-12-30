def irreducible(a,b):
    while b:
        a,b=b,a%b
    if a==1:
        return True
    else:
        return False
try:
    while 1:
        n=int(input())
        count=0
        m=1
        while m<n:
            if irreducible(n,m):
                count+=1
            m+=1
        print(count)
except EOFError:
    pass