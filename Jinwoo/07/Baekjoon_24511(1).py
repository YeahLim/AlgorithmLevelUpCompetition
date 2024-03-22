from collections import deque
import sys

N = int(input())                                                                        # queuestack을 구성하는 자료구조 갯수 N 입력

A = list(map(int, sys.stdin.readline().split()))                                        # i번 자료구조가 큐라면 A(i) = 0, 스택이라면 A(i) = 1

B = deque(map(int, sys.stdin.readline().split()))                                       # B(i)는 i번에 들어있는 자료구조 값이다.

M = int(input())                                                                        # 삽입할 수열의 길이

C = list(map(int, sys.stdin.readline().split()))                                        # queuestack에 삽입할 원소를 갖고 있는 길이 M의 수열 C

#print(N, "\n", A, "\n", B, "\n", M, "\n", C)\
q = deque()

for i in range(N):
    if A[i] == 0:
        q.append(B[i])
# 시간복잡도 O(N)

#print(q)

for i in range(M):
    q.appendleft(C[i])
    print(q.pop(), end=" ")
# 시간복잡도 O(N)