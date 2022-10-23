p,q=map(int,input().split())
d=0
a=p
m=p
while a<2e18:
    d+=1
    a-=p
    a+=q*d**5
    if a<m:
        m=a
x=2*p-m
print(x)

while d<2e6:
    d+=1
    a-=p
    a+=q*d**5
    if a>=1e99:
        print(d)
        exit()

l=int(2e6)
r=int(1e19)
while l<r:
    m=(l+r)//2
    tmp=q*(m+1)*(m+1)*m*m*(2*m*m+2*m-1)
    # if tmp/12-p*m<1e99:
    if tmp-p*m*12<12*1e99:
        l=m+1
    else:
        r=m
print(r)