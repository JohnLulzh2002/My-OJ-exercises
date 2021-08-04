n=600851475143
i=3
while i<=n:
    if n%i:
        i+=2
    else:
        n//=i
print(i)