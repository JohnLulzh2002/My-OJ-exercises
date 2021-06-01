n=int(input())
a=input()
r=0
s=0
p=0
for i in a:
    if i=='R':
        r+=1
    if i=='S':
        s+=1
    if i=='P':
        p+=1
print(max([r,s,p]))