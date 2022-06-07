t=int(input())
for i in range(t):
    n,k=map(int,input().split())
    n-=(n-1)//2
    print(k//n)