import sys
from collections import defaultdict

input = sys.stdin.readline
n, d, k, c = map(int, input().split())
sushi = [int(input()) for _ in range(n)]

max_sushi = 0
start = 0
end = k-1
data = defaultdict(int)
data[c] = 1

for i in range(k):
    data[sushi[i]] += 1

max_sushi = max(max_sushi, len(data))

for start in range(n):
    end = (start + k) % n
    data[sushi[start]] -= 1
    if data[sushi[start]] == 0:
        data.pop(sushi[start])
    data[sushi[end]] += 1
    max_sushi = max(max_sushi, len(data))

print(max_sushi)