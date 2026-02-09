import sys

s = int(sys.stdin.readline())
total = 0
count = 0

while True:
    count += 1
    total += count
    if total > s:
        break

print(count-1)