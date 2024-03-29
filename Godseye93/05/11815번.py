import sys

input = sys.stdin.readline

count = int(input())
nums = list(map(int, input().split()))

results = [1 if num == int(num ** 0.5) ** 2 else 0 for num in nums]
print(" ".join(map(str, results)))