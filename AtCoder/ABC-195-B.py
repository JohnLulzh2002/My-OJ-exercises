a,b,w=[int(x)for x in input().split()]
w*=1000
ans1,ans2=1000002,0
t=False
for i in range(1,1000001):
    if a*i<=w and b*i>=w:
        ans1=min(i,ans1)
        ans2=max(i,ans2)
        t=True
if t:
    print(ans1,ans2,sep=' ')
else:
    print('UNSATISFIABLE')