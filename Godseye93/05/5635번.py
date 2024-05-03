import sys

input = sys.stdin.readline

n = int(input())

data = []

for _ in range(n):
    name, dd, mm, yyyy = input().split()
    data.append((name, int(dd), int(mm), int(yyyy)))

sorted_data = sorted(data, key=lambda x: (x[3], x[2], x[1]))

print(sorted_data[-1][0])
print(sorted_data[0][0])
