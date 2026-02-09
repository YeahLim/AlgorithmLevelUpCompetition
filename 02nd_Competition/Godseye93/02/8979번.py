import sys

input = sys.stdin.readline

n,k = map(int, input().split())

countries = []
for _ in range(n):
    countries.append(list(map(int, input().split())))

countries.sort(key=lambda x: (-x[1], -x[2], -x[3]))

rank = {}
cur_rank = 1

for i in range(n):
    if i > 0 and (
        countries[i][1] != countries[i-1][1] or
        countries[i][2] != countries[i-1][2] or
        countries[i][3] != countries[i-1][3]
    ):
        cur_rank = i + 1

    rank[countries[i][0]] = cur_rank

print(rank[k])