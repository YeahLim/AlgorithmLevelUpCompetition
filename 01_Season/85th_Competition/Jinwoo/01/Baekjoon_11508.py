import sys
input = sys.stdin.readline

N = int(input())
prices = [int(input()) for _ in range(N)]

# 내림차순 정렬
prices.sort(reverse=True)

total = 0
for i in range(N):
    if (i % 3) != 2:  # 3번째 제품은 무료 (0-based index)
        total += prices[i]

print(total)
