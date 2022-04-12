n=int(input())
m=int(input())
a=[]
# b={}
f=lambda x:sum((int(y)for y in str(x)))
for i in range(1,n+1):
    a.append((i,f(i)*1000000+i))
    # b[f(i)*1000000+i]=i
a=sorted(a,key=lambda x:x[1])
# bk=sorted(b)
print(a[m-1][0])
# print(b[bk[m-1]])