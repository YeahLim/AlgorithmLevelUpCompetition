import sys

input = sys.stdin.readline
w = input().rstrip()
l = len(w) if len(w) <= 9 else 9 + (len(w) - 9) // 2
a = []

def bt(i):
    if i == len(w):
        print(' '.join(a))
        exit(0)
    if w[i] != '0' and w[i] not in a:
        a.append(w[i])
        bt(i + 1)
        a.pop()
    if i + 1 < len(w) and w[i] != '0' and int(w[i:i + 2]) <= l and w[i:i + 2] not in a:
        a.append(w[i:i + 2])
        bt(i + 2)
        a.pop()

bt(0)
