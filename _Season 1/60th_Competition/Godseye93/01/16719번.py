import sys

input = sys.stdin.readline

def zoac(s, start, result):
    if not s:
        return
    min_char = min(s)
    min_idx = s.index(min_char)
    result[start + min_idx] = min_char
    print(''.join(result))
    zoac(s[min_idx + 1:], start + min_idx + 1, result)
    zoac(s[:min_idx], start, result)

s = input().strip()
result = [''] * len(s)
zoac(s, 0, result)