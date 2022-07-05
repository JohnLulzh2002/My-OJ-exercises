n=int(input())
def f(l,r):
    if len(l)==1 or len(r)==1:
        if l==(0,) and r==(1,0):
            return True
        elif l==(0,1) and r==(0,):
            return True
        return False
    if l==(0,1) and r==(0,0):
        return True
    elif l==(0,1) and r==(0,1):
        return True
    elif l==(0,0) and r==(1,0):
        return True
    elif l==(1,0) and r==(1,0):
        return True
    else:
        return False
best=[]
ls=[]
for i in range(n):
    # print()
    # print('&',*best)
    s=list(input())
    for j in range(len(s)):
        if s[j]=='o':
            s[j]=0
        elif s[j]=='w':
            s[j]=1
        else:
            s[j]=2
    if best==[]:
        if len(ls)+len(s)>=2:
            t=ls+s
            a=0
            for j in range(len(t)-2):
                if (t[j],t[j+1],t[j+2])==(0,1,0):
                    a+=1
            best=[(tuple(t[:2]),tuple(t[-2:]),a)]
            t=s+ls
            a=0
            for j in range(len(t)-2):
                if (t[j],t[j+1],t[j+2])==(0,1,0):
                    a+=1
            if a>best[0][2]:
                best=[(tuple(t[:2]),tuple(t[-2:]),a)]
            elif a==a>best[0][2]:
                best.append((tuple(t[:2]),tuple(t[-2:]),a))
            print(best[0][2])
        else:
            print(0)
        ls=s
        continue
    nb=[]
    if len(s)==1:
        for j in best:
            if f(s,j[0]):
                nb.append(((s[0],j[0][0]),j[1],j[2]+1))
            elif f(j[1],s):
                nb.append((j[0],(j[1][1],s[0]),j[2]+1))
            else:
                nb.append(((s[0],j[0][0]),j[1],j[2]))
                nb.append((j[0],(j[1][1],s[0]),j[2]))
    else:
        a=0
        for j in range(len(s)-2):
            if (s[j],s[j+1],s[j+2])==(0,1,0):
                a+=1
        l=(s[0],s[1])
        r=(s[-2],s[-1])
        can=False
        for j in best:
            if f(r,j[0]):
                can=True
                nb.append((l,j[1],j[2]+a+1))
            elif f(j[1],l):
                can=True
                nb.append((j[0],r,j[2]+a+1))
            else:
                nb.append((l,j[1],j[2]+a))
                nb.append((j[0],r,j[2]+a))
    m=0
    for j in nb:
        m=max(m,j[2])
    j=0
    while j<len(nb):
        if nb[j][2]<m:
            nb.pop(j)
        else:
            j+=1
    if m==best[0][2]:
        nb+=best
    j=0
    while j<len(nb)-1:
        k=j+1
        while k<len(nb):
            if nb[j]==nb[k]:
                nb.pop(k)
            else:
                k+=1
        j+=1
    best=nb
    # print('^',*best)
    print(best[0][2])