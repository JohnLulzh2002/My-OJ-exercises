n=int(input())
ans=0
m=1
c=0
while 1000*m<=n:
    ans+=c*999*m
    c+=1
    m*=1000
ans+=(n-m+1)*c
print(ans)