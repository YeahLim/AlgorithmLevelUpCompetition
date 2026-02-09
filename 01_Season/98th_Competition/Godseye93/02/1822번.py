import sys
input = sys.stdin.readline

n, m = map(int, input().split())
A = set(map(int, input().split()))
B = set(map(int, input().split()))

result = sorted(B - A)
print(len(result))
if result:
    print(' '.join(map(str, result)))