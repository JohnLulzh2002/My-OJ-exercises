n,k=map(int,input().split())
p=[int(x)for x in input().split()]
print((n-1)//(k-1)+[1,0][(n-1)%(k-1)==0])