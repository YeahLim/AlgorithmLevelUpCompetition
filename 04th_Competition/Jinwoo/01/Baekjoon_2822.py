import sys
input = sys.stdin.readline

scores = []
for i in range(1, 9):
    s = int(input().strip())
    scores.append((s, i))  # (점수, 문제번호)

# 점수 내림차순 정렬
scores.sort(reverse=True)

top5 = scores[:5]

total = sum(s for s, _ in top5)
idxs = sorted(i for _, i in top5)

print(total)
print(*idxs)