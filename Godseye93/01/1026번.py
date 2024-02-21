import sys

input = sys.stdin.readline

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

a.sort()
b.sort(reverse=True)

num_sum = 0

for i in range(n):
    c = a[i] * b[i]
    num_sum += c

print(num_sum)
