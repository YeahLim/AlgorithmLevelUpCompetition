import sys
input = sys.stdin.readline

S = input().strip()    # 문자열 입력
# print(S)

# 서로 다른 부분 문자열을 저장할 집합
unique_substrings = set()

# 모든 부분 문자열을 생성하여 집합에 추가
for start in range(len(S)):
    for end in range(start + 1, len(S) + 1):
        substring = S[start:end]            # 부분 문자열 생성
        unique_substrings.add(substring)    # 집합에 추가하여 중복 제거

print(len(unique_substrings))