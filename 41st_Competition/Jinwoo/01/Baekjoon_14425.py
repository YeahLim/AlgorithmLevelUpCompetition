import sys
input = sys.stdin.readline

N, M = map(int, input().split())
cnt = 0
# print(N, M)

S = []  # 개수 N개의 집합

# 집합의 개수 N만큼 문자열 입력 후 S 리스트에 저장
for i in range(N):
    S.append(input().strip())

# print(S)

# 그 후 입력받은 문자열이 S에 포함되어 있을때 cnt를 오려주는 방식
for j in range(M):
    check_str = input().strip()

    if check_str in S:
        cnt += 1

print(cnt)
