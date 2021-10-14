n=int(input())
t=[int(x)for x in input().split()]
t=[(t[i],i+1) for i in range(n)]
t=sorted(t,key=lambda x:x[0])
ans=0
c=1
for i in t:
    print(i[1],end=' ')
    ans+=(n-c)*i[0]
    c+=1
print()
print('{:.2f}'.format(ans/n))