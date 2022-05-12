n=int(input())
a=[]
for i in range(n):
	j=int(input().split()[1])
	a.append(j)
direction=0
#0:right	1:up	2:left	3:down
dx=[1,0,-1,0]
dy=[0,1,0,-1]
ans=[1]
l=u=d=y=0
r=x=1
for i in a[:-1]:
	direction=(direction+i)%4
	x+=dx[direction]
	y+=dy[direction]
	if x>=l and x <=r and y>=d and y<=u:
		x+=dx[direction]*(r-l)
		y+=dy[direction]*(u-d)
		ans.append(1+max(abs(dx[direction]*(r-l)),abs(dy[direction]*(u-d))))
	else:
		ans.append(1)
	l=min(l,x)
	r=max(r,x)
	u=max(u,y)
	d=min(d,y)
for i in ans:
	print(i,end=' ')