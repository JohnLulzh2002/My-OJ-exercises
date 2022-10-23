from sys import stdout
y,q,s=map(int,input().split())
while 1:
    print(y)
    stdout.flush()
    t=input()
    if t=='2':
        break
    y*=2