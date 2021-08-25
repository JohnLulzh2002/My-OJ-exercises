t=int(input())
for i in range(t):
    k=int(input())-1
    j=1
    while k:
        j+=1
        if not(j%3==0 or j%10==3):
            k-=1
    print(j)