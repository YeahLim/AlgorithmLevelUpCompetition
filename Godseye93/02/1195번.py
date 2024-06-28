import sys

input = sys.stdin.readline

s1 = input().strip()
s2 = input().strip()

if len(s1) > len(s2):
    s1, s2 = s2, s1

max_overlap = 0
for i in range(len(s1)):
    for j in range(i+1):
        if s1[-i+j-1] == '2' and s2[j] == '2':
            break
    else:
        max_overlap = max(max_overlap, i + 1)

    for j in range(i+1):
        if s1[j] == '2' and s2[-i+j-1] == '2':
            break
    else:
        max_overlap = max(max_overlap, i + 1)

for i in range(len(s2) - len(s1) + 1):
    for j in range(len(s1)):
        if s1[j] == '2' and s2[j + i] == '2':
            break
    else:
        max_overlap = max(max_overlap, len(s1))
        break

print(len(s1) + len(s2) - max_overlap)