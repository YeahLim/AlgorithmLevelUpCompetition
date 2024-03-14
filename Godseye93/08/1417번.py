import sys

input = sys.stdin.readline

n = int(input())

dasom = int(input())

votes = [int(input()) for _ in range(n-1)]

count = 0
while votes and dasom <= max(votes):
    votes.sort()
    max_vote = votes.pop()
    max_vote -= 1
    dasom += 1
    votes.append(max_vote)
    count += 1

print(count)

