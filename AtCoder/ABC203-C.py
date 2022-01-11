n,k=[int(x)for x in input().split()]
friends=[]
for i in range(n):
    friends.append([int(x)for x in input().split()])
friends.sort(key=lambda x:x[0])
for i in friends:
    if k<i[0]:
        break
    k+=i[1]
print(k)