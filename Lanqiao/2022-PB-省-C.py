a=[1189]
b=[841]
for i in range(9):
    a.append(b[-1])
    b.append(a[-2]//2)
# for i in range(10):
#     print(i,a[i],b[i])
t=int(input()[1])
print(a[t])
print(b[t])