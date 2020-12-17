a=0
b=1
for i in range(1000-1):
	b+=a
	a=b-a
	a%=47
	b%=47
print(b)