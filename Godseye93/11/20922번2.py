import sys
input = sys.stdin.readline
from collections import defaultdict

n, k = map(int,input().split())
data = list(map(int,input().split()))

num_list = defaultdict(int)
start = 0
end = 0
max_sequence = 0

while end < n:
    num_list[data[end]] += 1

    # 중복된 것의 개수가 k를 초과할 경우 start를 이동시키며 초과하는 값을 줄인다
    while num_list[data[end]] > k:
        num_list[data[start]] -= 1
        start += 1

    max_sequence = max(max_sequence, end - start + 1)
    end += 1

print(max_sequence)