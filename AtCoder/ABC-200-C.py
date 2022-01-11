n=int(input())
a=map(int,input().split())
s=[0]*201
ans=0
for i in a:
    ans+=s[i%200]
    s[i%200]+=1
print(ans)