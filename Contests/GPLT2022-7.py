n,m,q=map(int,input().split())
d=[[1 for x in range(m)]for y in range(n)]
for i in range(q):
    t,c=map(int,input().split())
    if t:
        for j in range(n):
            d[j][c-1]=0
    else:
        for j in range(m):
            d[c-1][j]=0
print(sum((sum(d[x])for x in range(n))))