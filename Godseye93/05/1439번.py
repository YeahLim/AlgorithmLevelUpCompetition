import sys

input = sys.stdin.readline
word = input().strip()

count_0 = 0
count_1 = 0

if word[0] == '0':
    count_0 += 1
else:
    count_1 += 1

for i in range(len(word) - 1):
    if word[i] != word[i + 1]:
        if word[i + 1] == '0':
            count_0 += 1
        else:
            count_1 += 1

answer = min(count_0, count_1)
print(answer)
