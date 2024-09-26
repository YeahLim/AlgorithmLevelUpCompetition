N = int(input())                        # N개의 정수
A = set(map(int, input().split()))     # A는 set로 저장

M = int(input())                            # M개의 쿼리
queries = list(map(int, input().split()))   # M개의 쿼리 값들

# 쿼리 처리
for i in queries:
    if i in A:  # 리스트 A에서 값을 찾는 연산
        print(1)
    else:
        print(0)
