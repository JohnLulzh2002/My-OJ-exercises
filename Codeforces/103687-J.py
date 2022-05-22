from math import cos,sin,pi,sqrt
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    d=abs(b-a)
    if d>180:
        if a>b:
            a-=360
        else:
            b-=360
        d=abs(b-a)
    cosd=lambda x:cos(x*pi/180)
    sind=lambda x:sin(x*pi/180)
    if d==0:
        print(0)
        print(cosd(a),sind(a))
    elif d<=90:
        print(2)
        print(cosd(a),sind(a))
        print(cosd(a)+cosd(b),sind(a)+sind(b))
        print(cosd(b),sind(b))
    elif d<131.5:
        print(3)
        print(cosd(a),sind(a))
        vmult=lambda x,y:(x[0]*y,x[1]*y)
        vplus=lambda x,y:(x[0]+y[0],x[1]+y[1])
        vminus=lambda x,y:(x[0]-y[0],x[1]-y[1])
        vdis=lambda x:sqrt(x[0]*x[0]+x[1]*x[1])
        if a<b:
            print(cosd(a)+cosd(a+90),sind(a)+sind(a+90))
            v0=(cosd(a)+cosd(a+90),sind(a)+sind(a+90))
        else:
            print(cosd(a)+cosd(a-90),sind(a)+sind(a-90))
            v0=(cosd(a)+cosd(a-90),sind(a)+sind(a-90))
        v2=(cosd(b),sind(b))
        v02=vminus(v2,v0)
        d=vdis(v02)/2
        dp=sqrt(1-d*d)
        k=dp/(d*2)
        m=vplus(v0,vmult(v02,0.5))
        dm=(-k*v02[1],k*v02[0])
        a1=vplus(m,dm)
        a2=vminus(m,dm)
        if vdis(a1)>vdis(a2):
            print(*a1)
        else:
            print(*a2)
        print(cosd(b),sind(b))
    elif d==180:
        print(4)
        print(cosd(a),sind(a))
        print(cosd(a)+cosd(a+90),sind(a)+sind(a+90))
        print(cosd(a+90),sind(a+90))
        print(cosd(b)+cosd(a+90),sind(b)+sind(a+90))
        print(cosd(b),sind(b))
    else:
        print(4)
        print(cosd(a),sind(a))
        if a<b:
            print(cosd(a)+cosd(a+90),sind(a)+sind(a+90))
            print(cosd(a+90),sind(a+90))
            print(cosd(a+90)+cosd(b),sind(a+90)+sind(b))
        else:
            print(cosd(a)+cosd(a-90),sind(a)+sind(a-90))
            print(cosd(a-90),sind(a-90))
            print(cosd(a-90)+cosd(b),sind(a-90)+sind(b))
        print(cosd(b),sind(b))