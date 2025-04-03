import sys

input = sys.stdin.readline

N = int(input())
data = sys.stdin.read()

total = 0
current = ""
for char in data:
    if char.isdigit():
        current += char
    elif char == " ":
        total += int(current)
        current = ""
total += int(current)

result = total - (N * (N - 1) // 2)
print(result)