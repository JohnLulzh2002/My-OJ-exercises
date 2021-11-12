n,k=[int(x)for x in input().split()]
a=[int(x)for x in input().split()]
a.sort(reverse=True)
print(sum(a[:k]))