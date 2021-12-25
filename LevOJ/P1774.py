b=sorted([int(x)for x in input().split()])
if b[0]==1 or b[1]==2 or b in([2,4,4],[3,3,3]):
    print('YES')
else:
    print('NO')