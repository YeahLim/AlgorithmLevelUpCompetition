import sys
from collections import Counter

input = sys.stdin.read
data = input().split()

N = int(data[0])
cards = list(map(int, data[1:]))

count = Counter(cards)

max_freq = max(count.values())

candidates = [num for num, freq in count.items() if freq == max_freq]
print(min(candidates))