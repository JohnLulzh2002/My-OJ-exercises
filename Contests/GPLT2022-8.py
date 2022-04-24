n,k,s=map(int,input().split())
a=[[int(x)for x in input().split()]for y in range(n)]
d=[[]for i in range(295)]
for i in a:
    d[i[0]].append(i[1])
ans=0
for i in range(175,295):
    t=sorted(d[i])
    p=min(k,len(t))
    ans+=p
    for j in range(p,len(t)):
        if t[j]>=s:
            ans+=len(t)-j
            break
print(ans)