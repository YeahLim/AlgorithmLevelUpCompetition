import sys
from collections import deque

input = sys.stdin.readline

T = int(input())

for _ in range(T):
    n, m = map(int, input().split())
    queue = deque(list(map(int, input().split())))
    queue = deque((i, 1) if idx == m else (i, 0) for idx, i in enumerate(queue))

    cnt = 0
    while True:
        if queue[0][0] >= max(queue[0] for queue in list(queue))
