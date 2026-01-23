import sys

input = sys.stdin.readline

n, m = map(int, input().split())
scores = list(map(int, input().split()))
len_score = len(scores)
dict = {}

for i in range(m):
    data = list(map(str, input().split()))
    num, arr = data[0], data[1:]

    dict[num] = dict.setdefault(num, 0)
    for j in range(len_score):
        if arr[j] == 'O':
            dict[num] += scores[j]

min_student = 100001
max_val = max(dict.values())
for k, v in dict.items():
    if v == max_val:
        min_student = min(min_student, int(k))

print(min_student, max_val)
