a=input()
b=input()
def f(s):
    ans=[]
    for i in range(1,len(s)):
        if int(s[i])%2==int(s[i-1])%2:
            ans.append(str(max(int(s[i]),int(s[i-1]))))
    return ''.join(ans)
fa=f(a)
fb=f(b)
print(fa)
if fa!=fb:
    print(fb)