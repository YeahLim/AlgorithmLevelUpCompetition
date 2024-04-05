import sys
num = int(sys.stdin.readline())
count=0
for i in range(1, num+1):
    sum = i
    for j in range(i+1, num+1):
        sum += j
        if sum > num:
            break
        if sum == num:
            count +=1
print(count+1)