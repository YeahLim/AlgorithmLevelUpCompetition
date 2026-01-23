import sys

input = sys.stdin.readline

minsik = ['a', 'b', 'k', 'd', 'e', 'g', 'h', 'i', 'l', 'm', 'n', 'ng', 'o', 'p', 'r', 's', 't', 'u', 'w', 'y']

def word(word):
    ranks = []
    i = 0
    while i < len(word):
        if i + 1 < len(word) and word[i:i+2] == 'ng':
            ranks.append(minsik.index('ng'))
            i += 2
        else:
            ranks.append(minsik.index(word[i]))
            i += 1
    return ranks

N = int(input())
words = [input().strip() for _ in range(N)]
sorted_words = sorted(words, key=word)

for word in sorted_words:
    print(word)