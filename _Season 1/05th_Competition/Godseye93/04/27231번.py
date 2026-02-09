import sys

input = sys.stdin.readline

def pow_func(a, b):
    if a == 0:
        return 0
    if a == 1 or b == 0:
        return 1
    return a * pow_func(a, b-1)

def sdsum(str):
    s = set([int(str)])
    for i in range(1, len(str)):
        tmps = sdsum(str[i:])
        for j in tmps:
            s.add(int(str[:i]) + j)
    return s

T = int(input().strip())
while T > 0:
    s = input().strip()
    flg = 0
    for i in range(len(s)):
        if int(s[i]) >= 2:
            flg = 1
    if flg == 0:
        print("Hello, BOJ 2023!")
        T -= 1
        continue
    sums = sdsum(s)
    cnt = 1
    for i in range(2, 10):
        m = 0
        for j in range(len(s)):
            m += pow_func(int(s[j]), i)
        if m in sums:
            cnt += 1
    print(cnt)
    T -= 1