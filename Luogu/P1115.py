l=int(input())
a=[int(x)for x in input().split()]
m=a[0]
a=a[1:]
ans=-1000000
for i in a:
    m+=i
    if m>ans:
        ans=m
    if m<0:
        m=0
print(ans)