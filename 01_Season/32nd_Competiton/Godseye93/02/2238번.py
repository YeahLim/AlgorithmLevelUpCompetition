import sys

input = sys.stdin.readline

U, N = map(int, input().split())
bidders = [[] for _ in range(10001)]
bid_count = [0 for _ in range(10001)]
min_count = 10001

for _ in range(N):
    name, price = input().split()
    price = int(price)
    bidders[price].append(name)
    bid_count[price] += 1

for i in range(10001):
    if bid_count[i] != 0:
        min_count = min(bid_count[i], min_count)

for i in range(10001):
    if min_count == bid_count[i]:
        print(bidders[i][0], i)
        break