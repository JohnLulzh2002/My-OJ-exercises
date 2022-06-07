t=int(input())
for i in range(t):
    a,b=sorted(map(int,input().split()))
    print(min(a+b,max(2*a,b))**2)