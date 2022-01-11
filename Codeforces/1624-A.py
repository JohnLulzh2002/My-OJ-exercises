t=int(input())
for i in range(t):
    n=int(input())
    a=[int(x)for x in input().split()]
    print(max(a)-min(a))