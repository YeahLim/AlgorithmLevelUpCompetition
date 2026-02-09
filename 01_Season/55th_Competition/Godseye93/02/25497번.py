import sys

input = sys.stdin.readline

input()
S = input().strip()

answer = 0
l_cnt = 0
s_cnt = 0
skill_fail = False

for char in S:
    if char == 'L':
        l_cnt += 1
    elif char == 'S':
        s_cnt += 1
    elif char == 'R':
        if l_cnt != 0:
            answer += 1
            l_cnt -= 1
        else:
            skill_fail = True
    elif char == 'K':
        if s_cnt != 0:
            answer += 1
            s_cnt -= 1
        else:
            skill_fail = True
    else:
        answer += 1

    if skill_fail:
        break

print(answer)