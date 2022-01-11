h,w=[int(x)for x in input().split()]
c=[]
for i in range(h):
    c.append(input())
def can(i,j,p):
    global c
    if i>0 and c[i-1][j]==p:
        return False
    if i<h-1 and c[i+1][j]==p:
        return False
    if j>0 and c[i][j-1]==p:
        return False
    if j<w-1 and c[i][j+1]==p:
        return False
    return True
for p in ('1','2','3','4','5'):
    for i in range(h):
        for j in range(w):
            if c[i][j]=='.' and can(i,j,p):
                c[i]=c[i][:j]+p+c[i][j+1:]
for i in c:
    print(i)