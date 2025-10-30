import sys

input = sys.stdin.readline

N, K = map(int, input().split())
words = [input().strip()[4:-4] for _ in range(N)]

if K < 5:
    print(0)
else:
    base = {'a', 'n', 't', 'i', 'c'}
    candidates = []
    word_masks = []

    for w in words:
        mask = 0
        seen = set()
        for c in w:
            if c not in base and c not in seen:
                seen.add(c)
                if c not in candidates:
                    candidates.append(c)
                mask |= (1 << (ord(c) - ord('a')))
        word_masks.append(mask)

    M = len(candidates)


    def dfs(idx, cnt, learned):
        if cnt == K - 5 or idx == M:
            count = sum(1 for mask in word_masks if (mask & learned) == mask)
            return count

        # 현재 알파벳을 배우지 않는 경우
        res1 = dfs(idx + 1, cnt, learned)

        # 현재 알파벳을 배우는 경우
        res2 = dfs(idx + 1, cnt + 1, learned | (1 << (ord(candidates[idx]) - ord('a'))))

        return max(res1, res2)


    result = dfs(0, 0, 0)
    print(result)