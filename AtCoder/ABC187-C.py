n=int(input())
a=set()
b=set()
while n:
    n-=1
    i=input()
    if i[0]=='!':
        a.add(i[1:])
    else:
        b.add(i)
t=True
for i in a:
    if i in b:
        print(i)
        exit()
print('satisfiable')