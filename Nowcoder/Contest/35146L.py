n=int(input())
a=sorted([int(x)for x in input().split()])
if sum(a[:-1])>a[-1]:
    print('YES')
else:
    print('NO')