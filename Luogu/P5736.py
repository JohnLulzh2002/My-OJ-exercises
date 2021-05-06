n=int(input())
a=[int(x)for x in input().split()]
for i in a:
    t=True
    for j in range(2,i):
        if i%j==0:
            t=False
            break
    if t and i!=1:
        print(i,end=' ')