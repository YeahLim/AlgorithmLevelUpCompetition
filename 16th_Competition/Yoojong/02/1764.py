import sys
#실4 듣보잡
n, m = map(int, sys.stdin.readline().split())
people = set()
ans = list()
count = 0
for _ in range(n+m):
    person = sys.stdin.readline().rstrip()
    if person in people:
        count += 1
        ans.append(person)
    else:
        people.add(person)

print(count)
ans.sort()
for i in ans:
    print(i)