import sys
input = sys.stdin.readline

n = int(input())
for _ in range(n):
    s = input().strip()
    l, r = 0, len(s) - 1
    res = 0

    while l < r:
        if s[l] == s[r]:
            l += 1
            r -= 1
            continue

        if s[l] == s[r - 1]:
            tmp = s[l:r]
            if tmp == tmp[::-1]:
                res = 1
                break
        if s[l + 1] == s[r]:
            tmp = s[l + 1:r + 1]
            if tmp == tmp[::-1]:
                res = 1
                break

        res = 2
        break

    print(res)