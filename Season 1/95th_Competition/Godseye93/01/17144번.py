import sys
input = sys.stdin.readline

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

def spread_dust():
    temp = [[0] * C for _ in range(R)]
    for i in range(R):
        for j in range(C):
            if room[i][j] > 0:
                amount = room[i][j] // 5
                cnt = 0
                for k in range(4):
                    nx = i + dx[k]
                    ny = j + dy[k]
                    if 0 <= nx < R and 0 <= ny < C and room[nx][ny] != -1:
                        temp[nx][ny] += amount
                        cnt += 1
                temp[i][j] -= amount * cnt
    for i in range(R):
        for j in range(C):
            room[i][j] += temp[i][j]

def operate_air_purifier():
    top = air_purifier[0]
    bottom = air_purifier[1]

    for i in range(top - 1, 0, -1):
        room[i][0] = room[i-1][0]
    for j in range(0, C-1):
        room[0][j] = room[0][j+1]
    for i in range(0, top):
        room[i][C-1] = room[i+1][C-1]
    for j in range(C-1, 1, -1):
        room[top][j] = room[top][j-1]
    room[top][1] = 0

    for i in range(bottom + 1, R-1):
        room[i][0] = room[i+1][0]
    for j in range(0, C-1):
        room[R-1][j] = room[R-1][j+1]
    for i in range(R-1, bottom, -1):
        room[i][C-1] = room[i-1][C-1]
    for j in range(C-1, 1, -1):
        room[bottom][j] = room[bottom][j-1]
    room[bottom][1] = 0

R, C, T = map(int, input().split())
room = [list(map(int, input().split())) for _ in range(R)]

air_purifier = []
for i in range(R):
    if room[i][0] == -1:
        air_purifier.append(i)

for _ in range(T):
    spread_dust()
    operate_air_purifier()

answer = 0
for i in range(R):
    for j in range(C):
        if room[i][j] > 0:
            answer += room[i][j]

print(answer)