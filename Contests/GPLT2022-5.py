a=[int(x)for x in input().split()]
n=int(input())
b=[[6,5,4,3,2,1]for x in range(6)]
for i in range(6):
    b[i].remove(a[i])
print(*[b[x][n-1]for x in range(6)])