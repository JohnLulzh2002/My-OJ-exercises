n=int(input())
for i in range(2,n):
    if n%i==0:
        a=i
        b=n//i
        break
print(a+b)