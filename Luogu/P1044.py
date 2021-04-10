n=int(input())
def comb(n,m):
    ans=1
    for i in range(m):
        ans*=n-i
        ans//=i+1
    return ans
print(comb(2*n,n-1)//n)