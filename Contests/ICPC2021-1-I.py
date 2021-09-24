s=sorted([int(x)for x in input().split()],reverse=True)
a=int(input())
r=int(input())
for i in s:
    if i>=a-r and i<=a+r:
        print(i,end=' ')
print()