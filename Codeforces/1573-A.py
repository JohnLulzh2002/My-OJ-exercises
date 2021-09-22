t=int(input())
for i in range(t):
    n=int(input())
    s=list(input())
    ans=int(s[-1])
    for j in range(len(s)-1):
        if int(s[j]):
            ans+=1+int(s[j])
    print(ans)