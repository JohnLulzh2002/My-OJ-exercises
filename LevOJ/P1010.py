n=int(input())
while n:
    n-=1
    ans=[]
    a=int(input())
    i=0
    while a:
        ans.append(a%8)
        i+=1
        a=int(a/8)
    while i:
        print(ans[i-1],end="")
        i-=1
    print()