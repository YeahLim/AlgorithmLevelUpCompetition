import sys

input = sys.stdin.readline

def backtrack(idx, eggs):
    global max_broken
    if idx == N:
        broken = sum(1 for s, _ in eggs if s <= 0)
        max_broken = max(max_broken, broken)
        return
    if eggs[idx][0] <= 0:
        backtrack(idx + 1, eggs)
        return
    hit = False
    for j in range(N):
        if j != idx and eggs[j][0] > 0:
            hit = True
            eggs[idx][0] -= eggs[j][1]
            eggs[j][0] -= eggs[idx][1]
            backtrack(idx + 1, eggs)
            eggs[idx][0] += eggs[j][1]
            eggs[j][0] += eggs[idx][1]
    if not hit:
        backtrack(idx + 1, eggs)

N = int(input())
eggs = [list(map(int, input().split())) for _ in range(N)]
max_broken = 0
backtrack(0, eggs)
print(max_broken)