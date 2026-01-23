import sys

input = sys.stdin.readline

N, M = map(int, input().split())
books = list(map(int, input().split()))

box_count = 0
current_weight = 0

for book in books:
    if current_weight + book > M:
        box_count += 1
        current_weight = book
    else:
        current_weight += book

if current_weight > 0:
    box_count += 1

print(box_count)
