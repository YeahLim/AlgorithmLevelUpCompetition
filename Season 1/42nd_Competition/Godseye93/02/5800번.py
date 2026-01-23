import sys

input = sys.stdin.readline

t = int(input())
for i in range(t):
    a = list(map(int, input().split()))
    a.pop(0)
    a.sort(reverse=True)
    gap = []
    for j in range(1, len(a)):
        gap.append(a[j - 1] - a[j])
    print(f'Class {i + 1}')
    print(f'Max {max(a)}, Min {min(a)}, Largest gap {max(gap)}')
