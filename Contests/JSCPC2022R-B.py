from math import gcd
t=int(input())
for i in range(t):
    n,m,k=map(int,input().split())
    val=strong=True
    vis=set()
    if k<m*n:
        strong=False
    if k<3:
        val=strong=False
    lp=llp=None
    for i in range(k):
        x,y=map(int,input().split())
        p=(x,y)
        if p in vis:
            val=strong=False
        vis.add(p)
        if lp:
            dx=abs(p[0]-lp[0])
            dy=abs(p[1]-lp[1])
            if dx==0:
                if dy>1:
                    val=strong=False
            elif dy==0:
                if dx>1:
                    val=strong=False
            elif gcd(dx,dy)>1:
                val=strong=False
        if llp:
            v1=(p[0]-lp[0],p[1]-lp[1])
            v2=(llp[0]-lp[0],llp[1]-lp[1])
            vd=v1[0]*v2[0]+v1[1]*v2[1]
            if vd<=0:
                strong=False
        llp=lp
        lp=p
    if strong:
        print('strong')
    elif val:
        print('valid')
    else:
        print('invalid')