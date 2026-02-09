import sys
input = sys.stdin.readline

s = input().strip()

count_0 = 0  # 0 그룹 수
count_1 = 0  # 1 그룹 수

# 첫 문자 기준으로 첫 그룹 카운트
if s[0] == '0':
    count_0 += 1
else:
    count_1 += 1

# 앞 문자와 현재 문자가 다를 때 그룹이 바뀜
for i in range(1, len(s)):
    if s[i] != s[i - 1]:
        if s[i] == '0':
            count_0 += 1
        else:
            count_1 += 1

print(min(count_0, count_1))