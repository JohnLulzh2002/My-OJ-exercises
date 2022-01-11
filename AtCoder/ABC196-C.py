x=input()
l=len(x)
x=int(x)
c=0
for i in range(1,pow(10,(l+1)//2)):
    j=str(i)
    if int(j+j)<=x:
        c+=1
print(c)