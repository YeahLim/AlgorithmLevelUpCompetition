import sys

input = sys.stdin.readline

n, m, l = map(int, input().split())
point = [int(input()) for _ in range(m)]
target = [int(input()) for _ in range(n)]

for j in range(n):
    left = 0
    right = l

    while left <= right:
        mid = (left + right) // 2
        prev = 0
        cut = 0

        for i in range(m):
            if point[i] - prev >= mid:
                prev = point[i]
                cut += 1

        if target[j] == cut and l - prev < mid:
            cut = target[j] - 1

        if cut < target[j]:
            right = mid - 1
        else:
            left = mid + 1

    print(right)