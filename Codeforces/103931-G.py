for i in range(int(input())):
    b,r,d,s=map(int,input().split())
    lim=b*(r*s//60)+b
    if r==0:
        lim=0
    if lim<d:
        print('gua!')
    else:
        print('ok')