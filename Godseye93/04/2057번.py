import sys

input = sys.stdin.readline

n = int(input())

data = [1, 1]
for i in range(2, 21):
    data.append(data[i - 1] * i)

sum = 0

for i in range(20, -1, -1):
    if sum + data[i] < n:
        sum += data[i]
    elif sum + data[i] == n:
        print("YES")
        exit(0)

print("NO")