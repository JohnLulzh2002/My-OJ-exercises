def isPrime(n):
    if n==1:
        return False
    i=2
    while i*i<=n:
        if n%i==0:
            return False
        i+=1
    return True
n=int(input())
while n:
    n-=1
    no=True
    a=int(input())
    if isPrime(a):
        r=0
        while a:
            r*=10
            r+=a%10
            a=int(a/10)
        if(isPrime(r)):
            print(1)
            no=False
    if no:
        print(0)