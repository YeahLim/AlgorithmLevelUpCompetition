import sys

input = sys.stdin.readline

g, s = map(int, input().split())
word = input().strip()
string = input().strip()

count = 0
word_count = [0] * 58
string_count = [0] * 58

for char in word:
    word_count[ord(char) - 65] += 1

start, length = 0, 0
for i in range(s):
    string_count[ord(string[i]) - 65] += 1
    length += 1

    if length == g:
        if word_count == string_count:
            count += 1
        string_count[ord(string[start]) - 65] -= 1
        start += 1
        length -= 1

print(count)
