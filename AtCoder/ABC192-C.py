n,k=input().split()
k=int(k)
while k:
    k-=1
    g1=g2=0
    for i in sorted(n,reverse=True):
        g1*=10
        g1+=int(i)
    for i in sorted(n):
        g2*=10
        g2+=int(i)
    n=str(g1-g2)
print(n)