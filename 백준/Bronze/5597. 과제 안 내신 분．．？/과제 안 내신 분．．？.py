arr = []


for i in range(28):
    num = int(input())
    arr.append(num)


arr.sort()


for j in range(1, 31):
    if j not in arr:
        print(j)
        
    
