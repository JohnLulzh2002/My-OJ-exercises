import numpy as np
# a=np.random.randn(10)*5+1
# a=a.astype(int)
# print(a)
for i in range(10):
    n=np.random.randint(1,20)
    m=np.random.randint(1,100)
    print(n,end=' ')
    print(m)
    a = np.random.randn(n) * 5 + 1
    a = a.astype(int)
    for j in a:
        print(j, end=' ')
    print()