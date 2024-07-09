import sys

n = int(sys.stdin.readline())
ans = 0
for _ in range(n):
    word = sys.stdin.readline().rstrip()
    check = []
    temp = ''
    for i in word:
        if i not in check:
            check.append(i)
            temp = i
        if i in check and i != temp:
            ans -=1
            break
    ans += 1

print(ans)