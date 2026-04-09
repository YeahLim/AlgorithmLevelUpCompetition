import sys

input = sys.stdin.readline

n, m = map(int, input().split())
board = [input().strip() for _ in range(n)]
k = int(input())

ans = 0
for i in range(n):
    zero = board[i].count('0')
    if zero <= k and (k - zero) % 2 == 0:
        cnt = sum(1 for j in range(n) if board[i] == board[j])
        ans = max(ans, cnt)
print(ans)