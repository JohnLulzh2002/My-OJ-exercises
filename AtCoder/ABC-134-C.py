n=int(input())
a=[int(input()) for i in range(n)]
mm,m=sorted(a)[-2:]
for i in a:
    print(mm if i==m else m)