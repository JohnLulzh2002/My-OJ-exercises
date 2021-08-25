nxt={'B':'R','R':'B'}
for i in range(int(input())):
    n=int(input())
    s=list(input())
    if not('B'in s or 'R'in s):
        s[0]='B'
    for j in range(len(s)):
        if s[j]!='?' and j<len(s)-1:
            if s[j+1]=='?':
                s[j+1]=nxt[s[j]]
    for j in reversed(range(len(s))):
        if s[j]!='?' and j>0:
            if s[j-1]=='?':
                s[j-1]=nxt[s[j]]
    print(''.join(s))