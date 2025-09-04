import sys
input = sys.stdin.readline

S = input().strip()
n = len(S)
max_len = 0

for length in range(n, 1, -1):  # 부분 문자열의 길이
    if length % 2 != 0:
        continue  # 홀수 길이는 패스

    for start in range(n - length + 1):
        mid = start + length // 2
        left = S[start:mid]
        right = S[mid:start+length]

        left_sum = sum(map(int, left))
        right_sum = sum(map(int, right))

        if left_sum == right_sum:
            max_len = length
            break  # 가장 긴 길이를 찾았으므로 더 짧은 건 볼 필요 x
    if max_len:
        break

print(max_len)
