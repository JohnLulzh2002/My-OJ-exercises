t=int(input())
n=1
ps=[]
for i in range(66):
    ps.append(str(n))
    n*=2
for i in range(t):
    s=input()
    ls=len(s)
    ans=ls+1
    for p in ps:
        k=j=0
        lp=len(p)
        while k<lp and j<ls:
            if s[j]==p[k]:
                k+=1
            j+=1
        ans=min(ans,ls+lp-2*k)
    print(ans)