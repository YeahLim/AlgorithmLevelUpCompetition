import sys
input = sys.stdin.readline

n = int(input())
s = set()
cnt = 0

for _ in range(n):
    chat = input().strip()
    if chat == "ENTER":
        s.clear()
    else:
        if chat not in s:
            s.add(chat)
            cnt += 1

print(cnt)