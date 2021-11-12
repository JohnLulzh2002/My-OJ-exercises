n=int(input())
ans=0
for i in range(n):
    s=input().strip()
    for j in s:
        if j == '-':
            ans+=1
print(ans)