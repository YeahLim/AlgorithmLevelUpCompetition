import sys
import math

A, B = map(int, sys.stdin.readline().split())

li = list(x for x in range(int(math.sqrt(B)) + 1))

for i in range(2, int(math.sqrt(len(li)) + 1)):
    if (li[i] == 0):
        continue
    for j in range(i + i, len(li), i):
        li[j] = 0

count = 0

for i in range(2, len(li)):
    if (li[i] != 0):
        tmp = li[i] * li[i]
        while (tmp <= B):
            if (tmp >= A):
                count += 1
            tmp *= li[i]

print(count)
