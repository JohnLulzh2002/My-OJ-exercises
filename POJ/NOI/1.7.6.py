a=input()
t=False
if ord(a[0])>64:
    t=True
    for x in a:
        x=ord(x)
        if x<48 or x>122 or(x>57 and x<65)or(x>90 and x<95)or(x==96):
            t=False
            break
if t:
    print("yes")
else:
    print("no")