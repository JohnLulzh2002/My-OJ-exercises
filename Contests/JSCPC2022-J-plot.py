from math import log2
from matplotlib import pyplot as plt
def f(n):
    if n<3:
        return n
    if n%2:
        return f(n//2)*f(n//2)
    return 2*f((n-2)//2)*f(n//2)
n=99
x=range(1,n+1)
y=[log2(f(i))for i in x]
plt.plot(x,y)
for i in range(10,n+1,10):
    plt.axvline(i,linestyle=':')
for i in range(5,n+1,10):
    plt.axvline(i,linestyle='-.')
plt.show()