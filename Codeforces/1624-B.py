t=int(input())
for i in range(t):
    a,b,c=[int(x)for x in input().split()]
    if ((a+c)%2==0 and (a+c)//2%b==0)or((2*b-a)>0 and(2*b-a)%c==0)or((2*b-c)>0 and(2*b-c)%a==0):
        print('YES')
    else:
        print('NO')