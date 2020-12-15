a,t,b=[int(x) for x in input().split()]
if a>t and a>b:
	print("Alibaba")
elif b>a and b>t:
	print("Baidu")
elif t>a and t>b:
	print("Tencent")
else:
	print("NUIST")