n,q=map(int,input().split())
a=map(int,input().split())
ans={}
c=0
for i in a:
    c+=1
    if i in ans:
        ans[i].append(c)
    else:
        ans[i]=[c]
for i in range(q):
    x,k=map(int,input().split())
    if not x in ans:
        print(-1)
        continue
    l=ans[x]
    if len(l)>=k:
        print(ans[x][k-1])
    else:
        print(-1)