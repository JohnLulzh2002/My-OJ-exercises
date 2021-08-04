s=0
a=3
while a<1000:
    if a%3==0 or a%5==0:
        s+=a
    a+=1
print(s)