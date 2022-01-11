n=int(input())
h=map(int,input().split())
l=0
a=True
for i in h:
    if i<l:
        a=False
        break
    l=i-(i>l)
print('Yes'if a else 'No')