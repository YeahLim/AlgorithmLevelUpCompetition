import sys
input = sys.stdin.readline

n, k = map(int , input().split())
arr = [list(map(int , input().split())) for _ in range(n)]
nums = set(map(int , input().split()))


for i in range(n):
    for j in range(n):
        if arr[i][j] in nums:
            arr[i][j] = 0
cnt = 0
for i in range(n):
    for j in range(n):
        if i == 0 and j == 0:
            r, c = i, j
            for k in range(n):
                if arr[r][c]:
                    break
                r += 1
                c += 1
            else:
                cnt += 1
        if i == 0:
            r, c = i, j
            for k in range(n):
                if arr[r][c]:
                    break
                r += 1
            else:
                cnt += 1

        if j == 0:
            r, c = i, j
            for k in range(n):
                if arr[r][c]:
                    break
                c += 1
            else:
                cnt += 1
        if i == 0 and j == n-1:
            r, c = i, j
            for k in range(n):
                if arr[r][c]:
                    break
                r += 1
                c -= 1
            else:
                cnt += 1

print(cnt)