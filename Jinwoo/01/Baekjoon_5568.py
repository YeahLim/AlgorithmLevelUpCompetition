from itertools import permutations

n = int(input())
k = int(input())
cards = [input().strip() for _ in range(n)]

results = set()

for comb in permutations(cards, k):
    number = ''.join(comb)
    results.add(number)

print(len(results))
