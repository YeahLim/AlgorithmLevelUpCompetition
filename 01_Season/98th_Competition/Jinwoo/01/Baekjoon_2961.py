import sys
sys.setrecursionlimit(10**7)
input = sys.stdin.readline

N = int(input().strip())
items = [tuple(map(int, input().split())) for _ in range(N)]

ans = 10**18

def dfs(idx: int, sour: int, bitter: int, picked: bool):
    global ans

    if idx == N:
        if picked:
            ans = min(ans, abs(sour - bitter))
        return

    s, b = items[idx]

    # 1) 현재 재료를 선택
    dfs(idx + 1, sour * s, bitter + b, True)

    # 2) 현재 재료를 선택하지 않음
    dfs(idx + 1, sour, bitter, picked)

dfs(0, 1, 0, False)
print(ans)
