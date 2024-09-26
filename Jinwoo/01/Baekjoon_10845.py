from collections import deque
import sys

# 입력의 개수가 많으므로 빠른 입력을 위해 sys.stdin 사용
input = sys.stdin.readline

# 큐 자료구조 deque()로 초기화
queue = deque()

# 명령의 수 N 입력
N = int(input())

# 명령 처리
for i in range(N):
    command = input().split()

    if command[0] == 'push':  # push X 명령
        queue.append(int(command[1]))

    elif command[0] == 'pop':  # pop 명령
        if queue:
            print(queue.popleft())  # 큐의 앞에서 빼고 출력
        else:
            print(-1)  # 큐가 비어있는 경우 -1 출력

    elif command[0] == 'size':  # size 명령
        print(len(queue))  # 큐의 크기 출력

    elif command[0] == 'empty':  # empty 명령
        print(1 if not queue else 0)  # 큐가 비어있으면 1, 아니면 0

    elif command[0] == 'front':  # front 명령
        if queue:
            print(queue[0])  # 큐의 가장 앞에 있는 요소 출력
        else:
            print(-1)  # 큐가 비어있으면 -1 출력

    elif command[0] == 'back':  # back 명령
        if queue:
            print(queue[-1])  # 큐의 가장 뒤에 있는 요소 출력
        else:
            print(-1)  # 큐가 비어있으면 -1 출력
