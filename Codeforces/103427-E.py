t='edgnb'
s=input()
ans=0
for i in range(len(s)-4):
    if s[i:i+5]==t:
        ans+=1
print(ans)