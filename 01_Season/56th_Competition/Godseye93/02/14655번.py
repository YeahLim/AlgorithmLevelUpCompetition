import sys

input = sys.stdin.readline

N = int(input())
round1 = list(map(int, input().split()))
round2 = list(map(int, input().split()))

total_loss = sum(abs(card) for card in round1) + sum(abs(card) for card in round2)

print(total_loss)