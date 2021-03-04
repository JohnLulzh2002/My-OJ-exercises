a,b,c,d=[int(x) for x in input().split()]
e=c-a
f=d-b
e+=f//60
f%=60
print("{:d} {:d}".format(e,f))