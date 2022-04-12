n,b,a=map(int,input().split())
m=n//2
if a>m:
    for i in range(n-1):
        print('R',end='')
    for i in range(n-a):
        print('L',end='')
else:
    for i in range(n-1):
        print('L',end='')
    for i in range(a-1):
        print('R',end='')
if b>m:
    for i in range(n-1):
        print('D',end='')
    for i in range(n-b):
        print('U',end='')
else:
    for i in range(n-1):
        print('U',end='')
    for i in range(b-1):
        print('D',end='')