n=int(input())
a=sorted([int(x)for x in input().split()])
print('{:.2f}'.format(sum(a[1:-1])/(n-2)))