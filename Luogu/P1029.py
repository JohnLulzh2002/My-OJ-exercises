def lcm(a,b):
    n=a
    while n%b:
        n+=a
    return n
p,q=[int(x)for x in input().split()]
if q%p:
    print(0)
    quit()
q//=p
s=0
for i in range(1,q+1):
    if q%i==0 and lcm(i,q//i)==q:
        s+=1
print(s)