import sys

input = sys.stdin.readline

word = list(input().strip())
n = len(word)
words = []

for i in range(1,n-1):
    for j in range(i+1,n):
        a = word[:i]
        b = word[i:j]
        c = word[j:]
        a.reverse()
        b.reverse()
        c.reverse()
        ans = ''.join(a+b+c)
        words.append(ans)

print(sorted(words)[0])