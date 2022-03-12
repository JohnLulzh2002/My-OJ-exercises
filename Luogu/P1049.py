v=int(input())
n=int(input())
can=[False for i in range(v+1)]
can[0]=True
ans=0
for i in range(n):
    a=int(input())
    for j in range(min(ans+1,v+1-a))[::-1]:
        if can[j]:
            can[j+a]=True
            ans=max(ans,j+a)
print(v-ans)