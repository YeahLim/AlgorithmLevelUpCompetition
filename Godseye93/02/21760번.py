import sys
input = sys.stdin.readline

for _ in range(int(input())):
    n, m, k, d = map(int, input().split())
    c = n * m * (m - 1) * k // 2 + n * m * (n * m - m) // 2
    if c == 0:
        print(-1)
        continue
    b = d // c
    if b == 0:
        print(-1)
        continue
    s = n * m * (m - 1) * k * b // 2 + n * m * (n * m - m) * b // 2
    print(s)