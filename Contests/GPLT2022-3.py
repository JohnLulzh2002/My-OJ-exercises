forbid,adult,a,b=map(int,input().split())
if forbid>a and forbid>b:
    print('{:d}-N {:d}-N'.format(a,b))
    print('zhang da zai lai ba')
elif forbid>a and adult<=b:
    print('{:d}-Y {:d}-Y'.format(a,b))
    print('qing 2 zhao gu hao 1')
elif forbid>b and adult<=a:
    print('{:d}-Y {:d}-Y'.format(a,b))
    print('qing 1 zhao gu hao 2')
elif forbid<=b and forbid<=a:
    print('{:d}-Y {:d}-Y'.format(a,b))
    print('huan ying ru guan')
elif forbid>b and forbid<=a:
    print('{:d}-Y {:d}-N'.format(a,b))
    print('1: huan ying ru guan')
elif forbid<=b and forbid>a:
    print('{:d}-N {:d}-Y'.format(a,b))
    print('2: huan ying ru guan')