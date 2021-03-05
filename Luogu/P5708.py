from math import sqrt
a,b,c=[float(x)for x in input().split()]
p=(a+b+c)/2
print("{:.1f}".format(sqrt(p*(p-a)*(p-c)*(p-b))))