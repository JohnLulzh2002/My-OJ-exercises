from math import ceil
s,v=[int(x)for x in input().split()]
t=ceil(s/v+10)
h=(8-ceil(t/60))%24
m=(-t)%60
if h<10:
    print(0,end='')
print(h,':',sep='',end='')
if m<10:
    print(0,end='')
print(m)