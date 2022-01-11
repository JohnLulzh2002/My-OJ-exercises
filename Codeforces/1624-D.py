t=int(input())
for i in range(t):
    n,k=[int(x)for x in input().split()]
    s=input()
    a=[0 for x in range(26)]
    for j in s:
        a[ord(j)-ord('a')]+=1
    o=0
    for j in a:
        o+=j%2
    e=(len(s)-o)//2
    print(2*(e//k)+int((o+e%k*2)>=k))