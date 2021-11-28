t=int(input())
for i in range(t):
    g=['2','4','6','8']
    a=input()
    if a[-1] in g:
        print(0)
        continue
    q=False
    for i in a:
        if i in g:
            q=True
    if q:
        if a[0] in g:
            print(1)
        else:
            print(2)
    else:
        print(-1)