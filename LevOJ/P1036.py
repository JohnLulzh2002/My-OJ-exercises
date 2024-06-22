n=int(input())
o=[[]for i in range(n)]
for i in range(n):
    a=[int(x)for x in input().split()]
    for j in range(n):
        o[j].append(a[j])
for i in o:
    print(*i,sep=' ')