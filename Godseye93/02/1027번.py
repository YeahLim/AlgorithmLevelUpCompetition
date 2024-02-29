import sys

input = sys.stdin.readline

n = int(input())
data = list(map(int,input().split()))

result = [0] * n

for i in range(n):
    for j in range(i+1, n):
        visible = True
        slope = (data[j] - data[i]) / (j - i)
        for k in range(i+1, j):
            if data[i] + slope * (k - i) <= data[k]:
                visible = False
                break
        if visible:
            result[i] += 1
            result[j] += 1

print(max(result))