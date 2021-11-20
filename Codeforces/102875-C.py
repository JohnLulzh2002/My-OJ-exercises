n=int(input())
a=[0 for i in range(n)]
def insert(l,r,d):
    if l>r:
        return
    global a
    m=(l+r)//2
    a[m]=d
    insert(l,m-1,d+1)
    insert(m+1,r,d+1)
insert(0,n-1,1)
for i in a:
    print(i,end=' ')