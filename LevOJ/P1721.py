class Record:
    def __init__(self,a,b,c,d):
        self.t=a
        self.s=b
        self.p=c
        self.q=d
rread=input().split()
records=[]
while len(rread)==4:
    temp=[int(x) for x in rread[0].split(':')]
    records.append(Record(temp[0]*60+temp[1],rread[1],rread[2],rread[3]))
    rread=input().split()
#records=sorted(records,key=lambda fu:fu.s)
class Player:
    def __init__(self,a,b,c):
        self.ac=a
        self.name=b
        self.time=c
        self.finished=[]
        self.fine={}
players=[]
names=[]
for i in records:
    if not(i.s in names):
        names.append(i.s)
        players.append(Player(0,i.s,0))
    for j in players:
        if j.name==i.s:
            pNow=j
            break
    if i.p in pNow.finished:
        continue
    if i.q=='AC':
        pNow.ac+=1
        if i.p in pNow.fine:
            pNow.time+=pNow.fine[i.p]*20+i.t
        else:
            pNow.time+=i.t
        pNow.finished.append(i.p)
    if i.q in ('WA','RE','TLE','MLE'):
        if i.p in pNow.fine:
            pNow.fine[i.p]+=1
        else:
            pNow.fine[i.p]=1
players.sort(key=lambda x:x.name)
players.sort(key=lambda x:x.time)
players.sort(key=lambda x:x.ac,reverse=True)
for i in players:
    if i.ac:
        print(i.name,i.ac,i.time,sep=' ')