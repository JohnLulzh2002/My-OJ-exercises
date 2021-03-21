n=int(input())
a=[]
for i in range(n):
    a.append([int(x)for x in input().split()])
x,y=[int(i)for i in input().split()]
ans=-1
n=0
for i in a:
    n+=1
    if i[0]<=x and i[1]<=y and i[0]+i[2]>=x and i[1]+i[3]>=y:
        ans=n
print(ans)