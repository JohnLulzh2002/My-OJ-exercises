k,r=[int(x)for x in input().split()]
n=1
while((n*k)%10!=0 and (n*k)%10!=r):
    n+=1
print(n)