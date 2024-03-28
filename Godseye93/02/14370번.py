import sys

input = sys.stdin.readline

t = int(input())
sz = [4, 3, 3, 5, 4, 4, 3, 5, 5, 4]
sp = ["Z-W-U-X-G-", "-O-H-F-S-I"]
num = ["ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"]

for test in range(1, t + 1):
    s = input()
    cnt = {chr(i): 0 for i in range(256)}
    out = [0] * 10

    for char in s:
        cnt[char] += 1

    for i in range(2):
        for j in range(10):
            if j >= len(sp[i]): continue
            if cnt[sp[i][j]]:
                c = out[j] = cnt[sp[i][j]]
                for k in num[j]:
                    cnt[k] -= c

    print(f"Case #{test}: ", end="")
    for i in range(10):
        for j in range(out[i]):
            print(i, end="")
    print()

    for i in range(10):
        out[i] = 0