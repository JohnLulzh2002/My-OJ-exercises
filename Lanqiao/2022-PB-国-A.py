d=[]
a=b=1
i=2
while (a,b)not in d:
    d.append((a,b))
    a,b=b%10,(a+b)%10
    i+=1
f=lambda x:1 if sum(x)==7 else 0
c=[0,0]+[f(x) for x in d]
print(*zip(range(i),c),sep='\t\t')
n=202202011200
# for n in range(88,166):
ans=0
for j in range(i):
    ans+=n//i*c[j]
    if n%i>=j:
        ans+=c[j]
print(n,ans)