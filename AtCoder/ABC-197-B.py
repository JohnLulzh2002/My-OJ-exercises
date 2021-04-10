h,w,x,y=[int(x)for x in input().split()]
x-=1
y-=1
s=[]
for i in range(h):
    s.append(input())
cnt=1
i,j=x-1,y
while i>-1 and s[i][j]=='.':
    cnt+=1
    i-=1
i,j=x+1,y
while i<h and s[i][j]=='.':
    cnt+=1
    i+=1
i,j=x,y-1
while j>-1 and s[i][j]=='.':
    cnt+=1
    j-=1
i,j=x,y+1
while j<w and s[i][j]=='.':
    cnt+=1
    j+=1
print(cnt)