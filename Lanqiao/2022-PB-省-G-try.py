from itertools import permutations
from math import factorial
def f(x)->int:
    if len(x)==1:
        return 0
    a=x[:len(x)//2]
    b=x[len(x)//2:]
    s=0
    for i in b:
        for j in a:
            if j>i:
                s+=1
    return s+f(a)+f(b)

def ans(x):
    if x==1:
        return 0
    return ans(x-1)*x+factorial(x-1)*(x-1)*x//2
for n in range(1,10):
    s=[]
    for i in permutations(range(1,n+1),n):
        # print(i,f(i))
        s.append(f(i))
    print(n,sum(s),ans(n))
    # if n>1:
    #     print(n,tuple(map(lambda x:s[x]-ls[x%len(ls)],range(len(s)))))
    # ls=s
