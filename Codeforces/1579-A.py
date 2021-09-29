t=int(input())
for i in range(t):
    a=b=c=0
    s=input()
    for j in s:
        if j=='A':
            a+=1
        if j=='B':
            b+=1
        if j=='C':
            c+=1
    if a+c==b:
        print('YES')
    else:
        print('NO')