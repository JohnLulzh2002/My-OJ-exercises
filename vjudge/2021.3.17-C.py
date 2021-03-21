n=int(input())
a=[]
sum=0
while n:
    n-=1
    l,r=[int(x) for x in input().split()]
    a.append(l-r)
    sum+=l-r
max=sum
maxi=-1
for i in range(len(a)):
    if abs(sum-a[i]*2)>abs(max):
        max=sum-a[i]*2
        maxi=i
print(maxi+1)