import sys

N = int(input())
M = int(input())

N_list = sorted(list(map(int, sys.stdin.readline().split())))

#print(N_list)
start_point = 0
end_point = N-1
cnt = 0

while start_point < end_point:
    temp = N_list[start_point] + N_list[end_point]

    if temp < M:
        start_point += 1

    elif temp > M:
        end_point -= 1

    else:
        end_point -= 1
        start_point += 1
        cnt += 1
print(cnt)