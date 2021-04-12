a=[]
for i in range(5):
    a.append(input())
for i in range(5):
    print('\n\t{',end='')
    for j in range(10):
        print('{\'%c\',\'%c\',\'%c\'}'%(a[i][j*4],a[i][j*4+1],a[i][j*4+2]),end='')
        if j<9:
            print(',',end='')