import sys

input = sys.stdin.readline

def np(n):
    ln = len(n)
    half = n[:(ln + 1)//2]
    rev_half = half[::-1]
    p = half + rev_half[ln % 2:]
    if p > n:
        return p
    if all(c == '9' for c in n):
        return '1' + '0' * (ln - 1) + '1'
    inc = str(int(half) + 1)
    return inc + inc[::-1][ln % 2:]

n = input().strip()
print(np(n))
