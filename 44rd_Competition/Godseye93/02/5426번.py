import sys

input = sys.stdin.readline

t = int(input())

for i in range(t):
    msg = input()
    n = int(len(msg) ** (1 / 2))

    ans = ""
    for j in range(n, 0, -1):
        for k in range(j, n * n + 1, n):
            ans += msg[k - 1]

    print(ans)