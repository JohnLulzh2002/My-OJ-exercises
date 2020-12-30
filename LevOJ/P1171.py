# 0			->lose
# x			->win
# x x		->lose
# x y		->win
# x y z		->win
# x y n n	->x y
while 1:
    n=int(input())
    if n==0:
        break
    a=sorted([int(x) for x in input().split()])
    l=len(a)
    i=0
    while i<l-1:
        if a[i]==a[i+1]:
            del a[i]
            del a[i]
            l-=2
        i+=1
    if l:
        print("Win")
    else:
        print("Lose")