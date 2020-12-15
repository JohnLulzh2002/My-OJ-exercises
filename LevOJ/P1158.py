def c(a,b):
	if b==0 or b==a:
		return 1
	return c(a-1,b-1)+c(a-1,b)
N=int(input())
while N:
	N-=1
	n,m=[int(x) for x in input().split()]
	print(c(m+n,n))