import sys
input = sys.stdin.readline

n, m = map(int, input().split())
x, y, d = map(int, input().split())

# 0일때 r -1
# 1일때 c + 1
# 2일때 r + 1
# 3일때 c - 1

arr = [list(map(int, input().split())) for _ in range(n)]
dx = [-1,0,1,0]
dy = [0,1,0,-1]
v = [[0] * m for _ in range(n)]
v[x][y] = 1
cnt = 1
while 1:
    flag = 0
    # 4방향 확인
    for _ in range(4):
        # 0,3,2,1 순서 만들어주기위한 식
        nx = x + dx[(d+3)%4]
        ny = y + dy[(d+3)%4]
        # 한번 돌았으면 그 방향으로 작업시작
        d = (d+3)%4
        if 0 <= nx < n and 0 <= ny < m and arr[nx][ny] == 0:
            if v[nx][ny] == 0:
                v[nx][ny] = 1
                cnt += 1
                x = nx
                y = ny
                #청소 한 방향이라도 했으면 다음으로 넘어감
                flag = 1
                break
    if flag == 0: # 4방향 모두 청소가 되어 있을 때,
        if arr[x-dx[d]][y-dy[d]] == 1: #후진했는데 벽
            print(cnt)
            break
        else:
            x, y = x-dx[d],y-dy[d]