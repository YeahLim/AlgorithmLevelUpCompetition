import sys

input = sys.stdin.readline

A, B = input().split()

lenA = len(A)
lenB = len(B)

answer = lenA

for i in range(lenB - lenA + 1):
    diff = 0
    for j in range(lenA):
        if A[j] != B[i + j]:
            diff += 1
    answer = min(answer, diff)

print(answer)