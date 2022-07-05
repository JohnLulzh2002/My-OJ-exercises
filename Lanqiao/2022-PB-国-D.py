from re import findall
# print(findall('\,?\w+=','x=0,y=0;'))
# print(findall('new '+'long'+'\[(\d+)\]','arr1=new long[100000],arr2=new long[100000];'))
c=0
t=int(input())
for i in range(t):
    s=input().split()
    typ=s[0]
    s=' '.join(s[1:])
    if typ=='int':
        c+=len(findall('\,?\w+=',s)*4)
    elif typ=='long':
        c+=len(findall('\,?\w+=',s)*8)
    elif typ=='String':
        d=0
        st=False
        for j in s:
            if j=='”'and not st:
                st=True
            elif j=='”'and st:
                st=False
            elif st:
                d+=1
        c+=d
    elif typ=='int[]':
        c+=sum([int(x)*4 for x in findall('new int\[(\d+)\]',s)])
    elif typ=='long[]':
        c+=sum([int(x)*8 for x in findall('new long\[(\d+)\]',s)])
if c//(1024*1024*1024):
    print(c//(1024*1024*1024),'GB',sep='',end='')
    c%=1024*1024*1024
if c//(1024*1024):
    print(c//(1024*1024),'MB',sep='',end='')
    c%=1024*1024
if c//(1024):
    print(c//(1024),'KB',sep='',end='')
    c%=1024
if c:
    print(c,'B',sep='',end='')
print()