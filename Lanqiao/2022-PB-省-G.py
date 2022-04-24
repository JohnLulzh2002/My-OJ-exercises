n=int(input())
m=998244353
fact=1
ans=[0]
for i in range(1,n+2):
    fact*=i
    fact%=m
    ans.append((ans[-1]*(i+1)+fact*(i+1)*i//2)%m)
print(ans[n-1])