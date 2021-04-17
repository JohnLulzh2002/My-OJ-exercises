ans=0
def have24(n):
    for i in str(n):
        if i=='2' or i=='4':
            return True
    return False
for i in range(1,674):
    if have24(i):
        continue
    for j in range(i+1,2019-i):
        if j>=2019-i-j:
            break
        if have24(j) or have24(2019-i-j):
            continue
        ans+=1
print(ans)