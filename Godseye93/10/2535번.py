import sys
input = sys.stdin.readline

n = int(input())

reword = [list(map(int,input().split())) for _ in range(n)]
sorted_reword = sorted(reword, key=lambda x : x[2], reverse=True)

rank = []


for i in range(n):
    if len(rank) == 3:
        break
    if len(rank) == 2:
        if rank[0][0] == rank[1][0]:
            if rank[0][0] == sorted_reword[i][0]:
                continue
    rank.append((sorted_reword[i][0], sorted_reword[i][1]))

for i in rank:
    print(*i)