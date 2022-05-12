n=int(input())
d={}
for i in range(n):
    a=input().strip()
    for j in range(len(a)):
        if a[j]==' ':
            # print(j)
            # print(a[j])
            b=a[:j].strip()
            a=a[j+1:].strip()
            break
    d[b]=a
n=int(input())
for i in range(n):
    a=input().split()
    for i in a:
        if i in d:
            i=d[i]
        print(i,end=' ')
    print()