try:
    while 1:
        s=input()
        print(('no','yes')[s==''.join(reversed(s))])
except:
    pass