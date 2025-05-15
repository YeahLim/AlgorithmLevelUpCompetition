import sys
input = sys.stdin.readline

def solution():
    N, M = map(int, input().split())
    limit = [0] * 101
    pos = 0
    for _ in range(N):
        length, speed = map(int, input().split())
        for i in range(pos, pos + length):
            limit[i] = speed
        pos += length
    drive = [0] * 101
    pos = 0
    for _ in range(M):
        length, speed = map(int, input().split())
        for i in range(pos, pos + length):
            drive[i] = speed
        pos += length
    max_exceed = 0
    for i in range(100):
        exceed = drive[i] - limit[i]
        max_exceed = max(max_exceed, exceed)
    return max_exceed

print(solution())