import sys
input = sys.stdin.readline

n = int(input())
arr = [list(map(int,input().split())) for _ in range(n)]

num_sum = 0

for i in range(n):
    num_sum += arr[i][0] * arr[i][1]

print(num_sum)
    