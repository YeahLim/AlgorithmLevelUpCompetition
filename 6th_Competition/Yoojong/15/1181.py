import sys

n=int(sys.stdin.readline())

words = [sys.stdin.readline().rstrip() for i in range(n)]
words = list(set(words))

words = sorted(words)
words = sorted(words, key = lambda x : len(x))


#words = sorted(words, key = lambda x : (len(x), sorted(x) ) )
for _ in words:
    print(_)
