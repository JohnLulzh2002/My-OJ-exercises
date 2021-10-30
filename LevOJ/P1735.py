t=int(input())
for i in range(t):
    a,b,c,d,e,f=[int(x)for x in input().split()]
    k=b*d*f/a/c/e
    if k>1:
        print('Awesome!')
    else:
        print('Stupid!')