import sys
input = sys.stdin.readline

n = int(input())
x = list(map(int, input().split()))

x.sort(reverse=True)

total_length = sum(x)

cost = 0
for i in range(n-1):
    cost += x[i] * (total_length - x[i])
    total_length -= x[i]

print(cost)