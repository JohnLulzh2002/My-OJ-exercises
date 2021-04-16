s=input()
t=True
for i in range(len(s)):
    if s[i].islower()==i%2:
        t=False
        print('No')
        break
if t:
    print('Yes')