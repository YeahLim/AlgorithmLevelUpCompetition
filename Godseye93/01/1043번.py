import sys

input = sys.stdin.readline

N, M = map(int, input().split())
know = set(input().split()[1:])

parties = []
for _ in range(M):
    party = set(input().split()[1:])
    parties.append(party)

for _ in range(M):
    for party in parties:
        if party & know:
            know = know.union(party)

count = 0
for party in parties:
    if not (party & know):
        count += 1

print(count)