import sys

input = sys.stdin.readline

n = int(input())
words = [input().strip() for _ in range(n)]
m = int(input())
candidates = [input().strip() for _ in range(m)]

q_idx = words.index('?')

prev_char = words[q_idx-1][-1] if q_idx > 0 else None
next_char = words[q_idx+1][0] if q_idx < n-1 else None

used_words = set(words) - {'?'}

for cand in candidates:
    if cand in used_words:
        continue
    if (prev_char is None or cand[0] == prev_char) and \
       (next_char is None or cand[-1] == next_char):
        print(cand)
        break