n=int(input())
s=[int(x)for x in input().split()]
a=[int(x)for x in input().split()]
b=[int(x)for x in input().split()]
c=[a[i]+b[i] for i in range(n)]
for i in range(n-1):
    while c[i]>=2:
        c[i]-=2
        if s[i]==s[i+1]:
            c[i+1]+=1
        else:
            c[i+1]-=1
    while c[i]<0:
        c[i]+=2
        if s[i]==s[i+1]:
            c[i+1]-=1
        else:
            c[i+1]+=1
for i in c[:-1]:
    print(i,end=' ')
print(c[-1],end='')