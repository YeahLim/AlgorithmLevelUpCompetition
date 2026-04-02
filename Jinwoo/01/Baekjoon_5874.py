import sys

s = sys.stdin.readline().strip()

left_count = 0
answer = 0

for i in range(len(s) - 1):
    pair = s[i:i+2]

    if pair == "((":
        left_count += 1
    elif pair == "))":
        answer += left_count

print(answer)