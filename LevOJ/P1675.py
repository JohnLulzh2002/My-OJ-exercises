n=int(input())
t=1
for x in range(2,int(min(n**0.5+1,n-1))):
	if n%x==0:
		print("shui win")
		t=0
		break
if t:
	print("shui shui win")