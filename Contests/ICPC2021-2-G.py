n,t=[int(x)for x in input().split()]
p=[0 for i in range(6)]
for i in range(n):
    a,b=[int(x)for x in input().split()]
    p[1]+=a*b
    p[2]-=a*b*b
    p[3]+=a*b*b*b
    p[4]-=a*b*b*b*b
    p[5]+=a*b*b*b*b*b
# print(p)
tmp=False
for i in range(1,t):
    if p[i]:
        tmp=True
        break
if tmp:
    print('infinity',end='')
else:
    fac=[1,1,2,3,4,5]
    def gcd(a,b):
        if a<0:
            a=-a
        if a%b==0:
            return b
        return gcd(b,a%b)
    if p[t]==0:
        print(0,end='')
    else:
        ttt=gcd(p[t],fac[t])
        ans1=p[t]//ttt
        ans2=fac[t]//ttt
        if ans2==1:
            print(ans1,end='')
        else:
            print(ans1,ans2,sep='/',end='')