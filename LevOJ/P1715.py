n,k=[int(x)for x in input().split()]
if k==1:
    print("champion")
elif k<=0.1*n:
    print("au")
elif k<=0.25*n:
    print("ag")
elif k<=0.5*n:
    print("cu")
else:
    print("fe")