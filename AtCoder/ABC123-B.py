a=[int(input())for i in range(5)]
f=lambda x:(x//10+1)*10 if x%10 else x
g=lambda x:x%10 if x%10 else 10
print(sum(map(f,a))-10+min(map(g,a)))