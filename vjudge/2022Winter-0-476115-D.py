t=int(input())
for i in range(t):
    s=int(input())
    ans=s
    while s>9:
        a=s//10
        s%=10
        s+=a
        ans+=a
    print(ans)