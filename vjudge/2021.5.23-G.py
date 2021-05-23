n=int(input())
c,m=100,100
for i in range(n):
    c+=int(input())
    if c>m:
        m=c
print(m)