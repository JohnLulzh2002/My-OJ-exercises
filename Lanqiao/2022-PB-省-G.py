n=int(input())
m=998244353
fact=1
ans=[0]
for i in range(2,n+3):
    fact*=i-1
    fact%=m
    ans.append((ans[-1]*i+fact*(i-1)*i//2)%m)
print(ans[n-1])