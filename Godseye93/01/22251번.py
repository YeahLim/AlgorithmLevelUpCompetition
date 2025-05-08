import sys

input = sys.stdin.readline

def solve():
    N, K, P, X = map(int, input().split())

    num = [
        "1111110",
        "0110000",
        "1101101",
        "1111001",
        "0110011",
        "1011011",
        "1011111",
        "1110000",
        "1111111",
        "1111011"
    ]

    arr = [[0] * 10 for _ in range(10)]
    for i in range(10):
        for j in range(10):
            cnt = 0
            for k in range(7):
                if num[i][k] != num[j][k]:
                    cnt += 1
            arr[i][j] = cnt

    cur = str(X).zfill(K)

    def dfs(pos, flips, now):
        if flips > P:
            return 0
        if pos == K:
            if 1 <= int(now) <= N and now != cur:
                return 1
            return 0

        ans = 0
        original = int(cur[pos])
        for i in range(10):
            need = arr[original][i]
            if flips + need <= P:
                ans += dfs(pos + 1, flips + need, now + str(i))

        return ans

    result = dfs(0, 0, "")
    print(result)


solve()