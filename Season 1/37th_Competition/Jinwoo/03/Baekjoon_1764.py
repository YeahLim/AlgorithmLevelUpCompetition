N, M = map(int, input().split())        # 두 개의 이름 명단 리스트

# 듣도 못한 사람의 명단 입력 받기
not_heard = set()
for _ in range(N):
    not_heard.add(input().strip())
# 시간 복잡도 O(N)

# 보도 못한 사람의 명단 입력 받기
not_seen = set()
for _ in range(M):
    not_seen.add(input().strip())
# 시간 복잡도 O(N)

# 듣보잡 구하기
result = sorted(not_heard & not_seen)   # 교집합 구하기 시간 복잡도 O(min(N, M))
# 교집합 결과 정렬 시간 복잡도 O(K log K)

# 결과 출력
print(len(result))  # 듣도 보도 못한 사람의 수
for name in result:
    print(name)
