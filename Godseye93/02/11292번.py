import sys

input = sys.stdin.readline

while True:
    n = int(input())
    if n == 0:
        break
    s = []
    for _ in range(n):
        name, h = input().split()
        s.append((name, float(h)))
    max_h = max(stu[1] for stu in s)
    result = [stu[0] for stu in s if stu[1] == max_h]
    print(" ".join(result))