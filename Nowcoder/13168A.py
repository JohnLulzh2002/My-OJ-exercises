n=int(input())
ddd={'T':True,'F':False}
a=[ddd[x]for x in input().split()]
b=input().split()[::-1]
t=0
for c in b:
    if c.isalpha():
        b[t]=a[ord(c)-ord('A')]
    t+=1
# print(b)
i=0
dep=0
def calc():
    global i,b,dep
    now=b[i]
    i+=1
    if now=='+':
        dep+=1
        t1=calc()
        t2=calc()
        t=t1 or t2
        # print(i-1,t,'+',dep)
        dep-=1
        return t
    elif now=='*':
        dep+=1
        t1=calc()
        t2=calc()
        t=t1 and t2
        # print(i-1,t,'*',dep)
        dep-=1
        return t
    elif now=='-':
        dep+=1
        t=not calc()
        # print(i-1,t,'-',dep)
        dep-=1
        return t
    else:
        # print(i-1,now,'r',dep)
        return now
# print(calc())
if calc():
    print('T')
else:
    print('F')