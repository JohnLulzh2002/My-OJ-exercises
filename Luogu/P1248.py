n=int(input())
a=[]
try:
    while 1:
        a+=[int(x)for x in input().split()]
except EOFError:
    pass
b=a[n:][:n]
a=a[:n]
def f(x):
    if x[0]<x[1]:
        return (-1,x[0],-x[1])
    if x[0]>x[1]:
        return (1,-x[1],x[0])
    return (0,x[0],-x[1])
c=sorted(zip(a,b,range(1,n+1)),key=f)
a=b=0
for i in c:
    a+=i[0]
    if a>b:
        b=a
    b+=i[1]
print(b)
print(*(x[2]for x in c))