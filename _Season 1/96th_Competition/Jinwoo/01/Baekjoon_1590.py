N, T = map(int, input().split())
min_wait = float('inf')  # 초기값을 무한대로 설정

for _ in range(N):
    S, I, C = map(int, input().split())

    for j in range(C):
        departure_time = S + I * j
        if departure_time >= T:
            wait_time = departure_time - T
            min_wait = min(min_wait, wait_time)
            break  # 더 뒷시간은 더 기다려야 하므로 탐색 중단

if min_wait == float('inf'):
    print(-1)
else:
    print(min_wait)
