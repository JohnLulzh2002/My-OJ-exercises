n=int(input())
s=input()
ans=0
c=0
for i in s:
    if c==0 and i=='p':
        c+=1
    elif c==1 and i=='t':
        c+=1
    elif c==2 and i=='y':
        ans+=1
if ans:
    print(ans+2)
else:
    print(0)