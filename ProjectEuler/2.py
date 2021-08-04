Max=4000000
a,b=1,2
s=0
while a<Max:
    if a%2==0:
        s+=a
    a,b=b,a+b
print(s)