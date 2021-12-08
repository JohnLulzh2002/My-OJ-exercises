n,x,y=[int(x)for x in input().split()]
k=[int(x)for x in input().split()]
m=int(input())
p=[int(x)for x in input().split()]
x-=1
y-=1
ll,rr=[],[]
if x>0:
    ll=k[x-1::-1]
if x<n-1:
    rr=k[x+1:]
left=len(ll)>=m and ll[:m]==p
right=len(rr)>=m and rr[:m]==p
if left and right:
    print('Unsure')
elif left:
    if x<y:
        print('Wrong')
    else:
        print('Right')
else:
    if x<y:
        print('Right')
    else:
        print('Wrong')