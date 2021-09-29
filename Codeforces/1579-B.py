t=int(input())
for tt in range(t):
    n=int(input())
    a=[int(x)for x in input().split()]
    i=0
    ans=[]
    while a!=sorted(a):
        m=min(a[i:])
        w=a[i:].index(m)
        if w:
            ans.append((i,i+w,w))
        del a[i+w]
        a.insert(i,m)
        i+=1
    print(len(ans))
    for i in ans:
        print(i[0]+1,i[1]+1,i[2],sep=' ')