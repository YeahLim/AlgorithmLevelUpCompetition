import sys

input = sys.stdin.readline

for _ in range(int(input())):
    n, m = map(int, input().split())
    x = int(''.join(input().split()))
    y = int(''.join(input().split()))
    data = list(map(int, input().split()))
    data += data[:m]
    res = 0

    for i in range(n):
        check = int(''.join(map(str, data[i:i+m])))
        if x <= check <= y:
            res += 1

    print(res)
