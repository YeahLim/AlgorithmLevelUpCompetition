import sys
input = sys.stdin.readline

def blink(s, n):
    left = [s[i] for i in range(0, n, 2)]
    right = [s[i] for i in range(n - 1 - (n % 2), -1, -2)]
    return ''.join(left + right)

def find_cycle(s, n):
    arr = s
    cnt = 0
    while True:
        arr = blink(arr, n)
        cnt += 1
        if arr == s:
            break
    return cnt

def solution(x, s):
    n = len(s)
    cycle = find_cycle(s, n)
    arr = s
    for _ in range(x % cycle):
        arr = blink(arr, n)
    return arr

x = int(input())
s = input().strip()
print(solution(x, s))