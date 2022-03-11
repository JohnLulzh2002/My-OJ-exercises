import random
with open('in.txt','w') as f:
    n=random.randint(1,500000)
    f.write(str(n)+'\n')
    for i in [random.randint(1,1000000000) for x in range(n)]:
        f.write(str(i)+' ')
    f.write('\n')