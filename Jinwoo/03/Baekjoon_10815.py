import sys
input = sys.stdin.readline


N = int(input().strip())                     # 상근이가 가진 카드 개수
cards = set(map(int, input().split()))       # 상근이가 가진 카드 집합
M = int(input().strip())                     # 확인할 숫자 개수
queries = list(map(int, input().split()))    # 확인할 숫자 리스트


result = [1 if query in cards else 0 for query in queries]
print(' '.join(map(str, result)))
