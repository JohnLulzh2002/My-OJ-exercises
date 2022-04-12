import math
m=(0,0,1,2,1,4,5,4,1,2,9,0,5,10,11,14,9,0,11,18,9,11,11,15,17,9,23,20,25,16,29,27,25,11,17,4,29,22,37,23,9,1,11,11,33,29,15,5,41,46)
aa=list(range(2,50))
# b=1
# for a in aa:
#     if m[a]==11:
#         b=math.lcm(b,a)
# print(b)
for i in range(1,10000000000000):
    t=i*59598+11
    can=True
    for a in aa:
        if t%a!=m[a]:
            can=False
            break
    if i%1000000000==0:
        print(i,i/10000000000000,end='\t*\n')
    if can==True:
        print(t)
        break