                                                          The missing number
l=list(map(int,input().strip().split()))
for i in range(1,100):
    if i not in l:
        print(i)
