s=input()
t=input()
d=(ord(t[0])-ord(s[0])+26)%26
a=True
for i in range(len(s)):
    if (ord(t[i])-ord(s[i])+26)%26!=d:
        a=False
        break
print(('No','Yes')[a])