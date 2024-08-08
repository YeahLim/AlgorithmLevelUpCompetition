import sys


N = int(sys.stdin.readline())
cranes = list(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline())
boxes = list(map(int, sys.stdin.readline().split()))

cranes.sort(reverse=True)
boxes.sort(reverse=True)

cnt = 0

if boxes[0] > cranes[0]:
    cnt = -1
else:
    while boxes:
        for c in cranes:
            if boxes and c < boxes[-1]:
                continue
            for b in boxes:
                if c >= b:
                    boxes.remove(b)
                    break
        cnt += 1

print(cnt)