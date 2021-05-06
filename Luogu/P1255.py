n=int(input())
if n:
    a,b=1,2
    for i in range(n-1):
        a,b=b,a+b
    print(a)
else:
    print(0)