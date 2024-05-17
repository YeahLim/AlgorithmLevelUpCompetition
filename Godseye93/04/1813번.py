import sys

input = sys.stdin.readline

n = int(input())
guesses = list(map(int, input().split()))

frequency = [0] * (n + 1)
for guess in guesses:
    if guess <= n:
        frequency[guess] += 1

answer = -1
for i in range(n + 1):
    if frequency[i] == i:
        answer = i

print(answer)
