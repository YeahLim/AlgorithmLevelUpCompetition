import sys
input= sys.stdin.readline

n = int(input())
cnt = 0
for _ in range(n):
    stack = []
    word = input().rstrip()
    for w in word:
        if stack and stack[-1] == w:
                stack.pop()
        else:
            stack.append(w)
    if not stack:
        cnt += 1
print(cnt)