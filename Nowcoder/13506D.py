n=int(input())
a=str(n)
no=[4,16,37,58,89,145,42,20]
s=0
while s!=1:
    s=0
    for b in a:
        s+=int(b)**2
    a=str(s)
    if s in no:
        print("UNHAPPY")
        break
if(s==1):
    print("HAPPY")