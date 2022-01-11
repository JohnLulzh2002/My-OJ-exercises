n=int(input())
a=[int(x)for x in input().split()]
m=pow(2,n-1)
max1=max2=0
for i in range(m):
    if a[i]>max1:
        max1=a[i]
        i1=i
    if a[i+m]>max2:
        max2=a[i+m]
        i2=i+m
if max1>max2:
    print(i2+1)
else:
    print(i1+1)