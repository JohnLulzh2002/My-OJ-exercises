from collections import deque
a,n=map(int,input().split())
vis,todo=set(),deque()
todo.append(1)
deep=0
while todo:
    deep+=1
    for x in todo.copy():
        todo.popleft()
        y=x*a
        if y==n:
            print(deep)
            exit()
        if y<n*10 and not y in vis:
            todo.append(y)
        vis.add(y)
        if x%10==0:
            continue
        y=int(str(x)[-1]+str(x)[:-1])
        if y==n:
            print(deep)
            exit()
        if y<n*10 and not y in vis:
            todo.append(y)
        vis.add(y)
print(-1)