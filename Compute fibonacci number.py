n=int(input())
a=1
b=1
l=[1,1]
for i in range(n):
    c=a+b
    a=b
    b=c
    l.append(c)
print(l[n-1])
