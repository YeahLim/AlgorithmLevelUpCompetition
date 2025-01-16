import sys
from collections import Counter

input = sys.stdin.readline

N, M = map(int, input().split())
words = []

for _ in range(N):
    word = input().strip()
    if len(word) >= M:  # 단어 길이가 M 이상일 때만 저장
        words.append(word)

# 단어 빈도수 계산
word_count = Counter(words)

# 정렬 수행
sorted_words = sorted(word_count.keys(), key=lambda x: (-word_count[x], -len(x), x))

print("\n".join(sorted_words))
