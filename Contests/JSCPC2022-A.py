n=int(input())
k={}
p='SAD:('
for i in range(n):
    a,b=input().split()
    if a in k:
        k[a].append(b)
    else:
        k[a]=[b]
for i in k:
    b=[]
    for j in k[i]:
        if j in b:
            b=b[b.index(j)+1:]+[j]
        else:
            b.append(j)
            if len(b)==5:
                p='PENTA KILL!'
                break
print(p)