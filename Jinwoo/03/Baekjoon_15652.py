import sys
input = sys.stdin.readline

def dfs(start, sequence):
    # 길이가 M인 수열을 완성한 경우 출력
    if len(sequence) == M:
        print(' '.join(map(str, sequence)))
        return

    # start부터 N까지 숫자를 선택
    for i in range(start, N + 1):
        # 수열에 현재 숫자를 추가하고 재귀 호출
        dfs(i, sequence + [i])

N, M = map(int, input().split())
temp = []                   # 출력되기 위해 숫자가 쌇일 배열


dfs(1, [])