from re import split as rsp
from datetime import datetime
n=int(input())
a=[]
for i in range(n):
    a.append(int(input()))
a.sort()
y1,m1,d1,h1,min1=[int(x)for x in rsp('[:-]',input())]
y2,m2,d2,h2,min2=[int(x)for x in rsp('[:-]',input())]
if not y1:
    o1=datetime(y1+1,m1,d1,h1,min1).toordinal()-365
else:
    o1=datetime(y1,m1,d1,h1,min1).toordinal()
o2=datetime(y2,m2,d2,h2,min2).toordinal()
dt=(o2-o1)*1440+(h2-h1)*60+min2-min1
ans=0
for i in a:
    if dt-i<0:
        break
    dt-=i
    ans+=1
print(ans)