S = input().strip()

# 모든 접미사 생성
suffixes = []
for i in range(len(S)):
    suffixes.append(S[i:])

# 접미사를 사전순으로 정렬
suffixes.sort()

# 정렬된 접미사 출력
for suffix in suffixes:
    print(suffix)
