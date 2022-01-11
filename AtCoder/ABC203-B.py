n,k=[int(x)for x in input().split()]
ans=sum(range(1,k+1))*n+100*sum(range(1,n+1))*k
print(ans)