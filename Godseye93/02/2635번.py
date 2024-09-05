import sys

input = sys.stdin.readline

N = int(input())

max_length = 0
best_start = 0

for start in range(N + 1):
    current = start
    previous = N
    length = 1
    while current >= 0:
        previous, current = current, previous - current
        length += 1
    if max_length < length:
        best_start = start
        max_length = length

previous = N
print(max_length)
while previous >= 0:
    print(previous, end=' ')
    previous, best_start = best_start, previous - best_start
