import sys

input = sys.stdin.readline

N = int(input())
students = {}
for _ in range(N*N):
    line = list(map(int, input().split()))
    students[line[0]] = line[1:]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
classroom = [[0]*N for _ in range(N)]

def find_seat(student):
    like, empty = [], []
    for x in range(N):
        for y in range(N):
            if classroom[x][y] == 0:
                like_cnt, empty_cnt = 0, 0
                for direction in range(4):
                    nx, ny = x + dx[direction], y + dy[direction]
                    if 0 <= nx < N and 0 <= ny < N:
                        if classroom[nx][ny] in students[student]:
                            like_cnt += 1
                        elif classroom[nx][ny] == 0:
                            empty_cnt += 1
                like.append((like_cnt, empty_cnt, x, y))
                empty.append((empty_cnt, x, y))
    like.sort(reverse=True, key=lambda x: (x[0], x[1], -x[2], -x[3]))
    return like[0][2], like[0][3]

def calculate_satisfaction():
    satisfaction = 0
    for x in range(N):
        for y in range(N):
            cnt = 0
            for direction in range(4):
                nx, ny = x + dx[direction], y + dy[direction]
                if 0 <= nx < N and 0 <= ny < N and classroom[nx][ny] in students[classroom[x][y]]:
                    cnt += 1
            if cnt > 0:
                satisfaction += 10**(cnt-1)
    return satisfaction

for student in students:
    x, y = find_seat(student)
    classroom[x][y] = student

print(calculate_satisfaction())
