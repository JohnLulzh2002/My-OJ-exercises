n,m=[int(x)for x in input().split()]
sq=0
rec=0
for i in range(1,n+1):
    if i<=m:
        sq+=(n+1-i)*(m+1-i)
        rec-=(n+1-i)*(m+1-i)
    rec+=(n+1-i)*((m+1)*m//2)
print('{:d} {:d}'.format(sq,rec))