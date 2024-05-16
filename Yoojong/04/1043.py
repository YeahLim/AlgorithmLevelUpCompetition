import sys
input = sys.stdin.readline

n, m = map(int, input().split())
knowList = set(input().split()[1:])
parties = []

for _ in range(m):
    parties.append(set(input().split()[1:]))

for _ in range(m):
    for party in parties:
        if party & knowList:    #교집합
            knowList = knowList.union(party)    #합치기
cnt = 0
for party in parties:
    if party & knowList:
        continue
    cnt += 1

print(cnt)