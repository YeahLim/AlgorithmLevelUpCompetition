import sys
from collections import deque
input = sys.stdin.readline

N = int(input())

dq = deque()
output = []

for _ in range(N):
    command = input().strip().split()

    if command[0] == "push_front":
        dq.appendleft(int(command[1]))

    elif command[0] == "push_back":
        dq.append(int(command[1]))

    elif command[0] == "pop_front":
        output.append(str(dq.popleft()) if dq else "-1")

    elif command[0] == "pop_back":
        output.append(str(dq.pop()) if dq else "-1")

    elif command[0] == "size":
        output.append(str(len(dq)))

    elif command[0] == "empty":
        output.append("1" if not dq else "0")

    elif command[0] == "front":
        output.append(str(dq[0]) if dq else "-1")

    elif command[0] == "back":
        output.append(str(dq[-1]) if dq else "-1")

# 한 번에 출력하여 성능 최적화
sys.stdout.write("\n".join(output) + "\n")
