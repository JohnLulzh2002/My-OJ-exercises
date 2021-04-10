n=int(input())
a=[int(x)for x in input().split()]
t=True
for i in range(n-1,0,-1):
    if a[i-1]>a[i]:
        t=False
        for j in range(n-1,i-1,-1):
            if a[i-1]>a[j]:
                a[i-1],a[j]=a[j],a[i-1]
                break
        a[i:]=sorted(a[i:],reverse=True)
    if not t:
        break
if t:
    print('ERROR')
else:
    for i in a:
        print(i,end=' ')