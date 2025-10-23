import sys
import bisect

input = sys.stdin.read
data = input().split()

N = int(data[0])
M = int(data[1])
A = list(map(int, data[2:2+M]))

# 누적합 배열
prefix = [0] * M
prefix[0] = A[0]
for i in range(1, M):
    prefix[i] = prefix[i-1] + A[i]

# 각 아이의 B_i를 처리
offset = 2 + M
answers = []
for i in range(N):
    Bi = int(data[offset + i])
    idx = bisect.bisect_left(prefix, Bi)
    if idx < M:
        answers.append(str(idx + 1))
    else:
        answers.append("Go away!")

print("\n".join(answers))
