n,m=[int(x)for x in input().split()]
mmap=[]
for i in range(n):
    mmap.append(list(input()))
    for j in range(m):
        if mmap[-1][j]=='*':
            x,y=i,j
dx=(-1,-1,0,1,1,1,0,-1)
dy=(0,1,1,1,0,-1,-1,-1)
def canGo(d):
    global x,y,dx,dy,mmap
    xx=x+dx[d]
    yy=y+dy[d]
    if xx<0 or xx>=n:
        return False
    if yy<0 or yy>=m:
        return False
    if mmap[xx][yy]=='#':
        return False
    sideWallX={1:(-1,0),3:(0,1),5:(1,0),7:(0,-1)}
    sideWallY={1:(0,1),3:(1,0),5:(0,-1),7:(-1,0)}
    if d in (1,3,5,7):
        xx0=x+sideWallX[d][0]
        xx1=x+sideWallX[d][1]
        yy0=y+sideWallY[d][0]
        yy1=y+sideWallY[d][1]
        if mmap[xx0][yy0]=='#' and mmap[xx1][yy1]=='#':
            return False
    return True
d=v=0
q=int(input())
o=list(input())
for i in o:
    if i=='L':
        d=(d-1)%8
    elif i=='R':
        d=(d+1)%8
    elif i=='U':
        v+=1
    elif i=='D':
        v=max(v-1,0)
    for j in range(v):
        if not canGo(d):
            print('Crash! ',end='')
            v=0
            break
        x+=dx[d]
        y+=dy[d]
    print(x+1,y+1)