n=int(input())
h=map(int,input().split())
l=0
for i in h:
    if i<=l:
        break
    l=i
print(l)