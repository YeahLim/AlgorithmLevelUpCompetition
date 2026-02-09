import sys

input = sys.stdin.readline

score = []
for i in range(8):
    score.append(int(input()))
data = []
answer = 0
for i in range(5):
    answer += max(score)
    data.append(score.index(max(score)) + 1)
    score[score.index(max(score))] = -1
data.sort()
print(answer)
print(*data)