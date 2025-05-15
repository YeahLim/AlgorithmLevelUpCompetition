import sys
input = sys.stdin.readline

n = int(input())
books = {}

for _ in range(n):
    title = input().strip()
    books[title] = books.get(title, 0) + 1

# 최대 판매 수 계산
max_count = max(books.values())

# 최대 판매 수에 해당하는 책 중 사전순 가장 앞선 것 출력
best = sorted([title for title, cnt in books.items() if cnt == max_count])[0]
print(best)
