import sys

input = sys.stdin.readline

s = input().strip()
results = []
for i in range(1, len(s) - 1):
    for j in range(i + 1, len(s)):
        part1 = s[:i][::-1]
        part2 = s[i:j][::-1]
        part3 = s[j:][::-1]
        results.append(part1 + part2 + part3)
print(min(results))