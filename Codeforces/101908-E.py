msg=input()
crib=input()
p=[]
for i in range(len(msg)-len(crib)+1):
    if msg[i]!=crib[0]:
        p.append(i)
for i in range(1,len(crib)):
    j=0
    while j<len(p):
        if msg[p[j]+i]==crib[i]:
            p.pop(j)
        else:
            j+=1
# print(p)
# print(*[msg[x:x+len(crib)] for x in p])
print(len(p))