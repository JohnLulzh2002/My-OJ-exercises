n=int(input())
board=[[True for x in range(11)]for y in range(11)]
for i in range(n):
    d,l,r,c=[int(x)for x in input().split()]
    dx,dy=(0,1),(1,0)
    for j in range(l):
        x=r+dx[d]*j
        y=c+dy[d]*j
        # print('(',x,',',y,')')
        if x>0 and x<11 and y>0 and y<11 and board[x][y]:
            board[x][y]=False
        else:
            print('N')
            exit()
print('Y')