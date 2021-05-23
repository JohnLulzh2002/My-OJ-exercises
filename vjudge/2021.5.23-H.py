n,k=[int(x)for x in input().split()]
w=sorted([int(x)for x in input().split()],reverse=True)
a,b=[int(x)for x in input().split()]
def comb(n,m):
    ans=1
    for i in range(m):
        ans*=n-i
        ans//=1+i
    return ans
def dfs(x,sum,used):
    global n,w,k,a,b
    if used>k:
        return 0
    if used==k:
        if sum>=a and sum<=b:
            return 1
        else:
            return 0
    ans=0
    for i in range(x+1,n):
        if sum+w[i]>b:
            continue
        if sum+2*w[i]<a:
            break
        if sum+w[i]>=a and sum+2*w[i]<=b:
            ans+=comb(n-i-1,k-used-1)
        else:
            ans+=dfs(i,sum+w[i],used+1)
    return ans
print(dfs(-1,0,0))