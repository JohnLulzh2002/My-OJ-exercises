s=list(input())
m=1000000007
r=list('chokudai')
d={}
for i in r:
    d[i]=0
for c in s:
    if c in r:
        n=r.index(c)
        if n:
            d[c]+=d[r[n-1]]
        else:
            d[c]+=1
        d[c]%=m
print(d['i'])