import sys

input = sys.stdin.readline

n = int(input())
dist = [int(input()) for _ in range(n)]
total = sum(dist)
dist.extend(dist)
max_dist = 0
left, right = 0, 0
current_sum = 0
while right < 2 * n:
    if current_sum <= total // 2 and right < 2 * n:
        current_sum += dist[right]
        right += 1
    else:
        current_sum -= dist[left]
        left += 1
    if left < right:
        other_sum = total - current_sum
        min_dist = min(current_sum, other_sum)
        max_dist = max(max_dist, min_dist)
print(max_dist)
