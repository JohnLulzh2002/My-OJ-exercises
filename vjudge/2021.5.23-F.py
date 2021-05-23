gl=gr=pl=pr=0
finished=False
server=True#True:left
for c in input():
    if c=='Q':
        if finished:
            if gl==2:
                print('2 (winner) - %d'%(gr))
            else:
                print('%d - 2 (winner)'%(gl))
            continue
        if server:
            print('%d (%d*) - %d (%d)'%(gl,pl,gr,pr))
        else:
            print('%d (%d) - %d (%d*)'%(gl,pl,gr,pr))
        continue
    if finished:
        continue
    if(server and c=='S')or(not server and c=='R'):
        pl+=1
        server=True
    else:
        pr+=1
        server=False
    if pl==10 or(pl>pr+1 and pl>4):
        pl=pr=0
        gl+=1
        if gl==2:
            finished=True
    if pr==10 or(pr>pl+1 and pr>4):
        pl=pr=0
        gr+=1
        if gr==2:
            finished=True