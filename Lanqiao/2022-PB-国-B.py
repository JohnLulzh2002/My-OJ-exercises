with open('primes.txt','r')as f:
    d=[int(x)for x in f.readlines()]
f=lambda x:x>9999999 and x<=100000000
d=list(filter(f,d))
primers=set()
MAX=99999999
# MAX=9999
notP=[False for x in range(MAX)]
for i in range(2,MAX):
    if notP[i]==False:
        primers.add(i)
    for j in primers:
        if(i*j>=MAX):
            break
        notP[i*j]=True
    if i%1000000==0:
        print('#',i)
print(primers.__len__())
ans=0
for i in d:
    if not notP[i]:
        ans+=1
print(ans)