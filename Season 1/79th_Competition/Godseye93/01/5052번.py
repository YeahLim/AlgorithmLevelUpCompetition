import sys

input = sys.stdin.readline

def is_consistent(phone_numbers):
    phone_numbers.sort()
    for i in range(len(phone_numbers) - 1):
        if phone_numbers[i + 1].startswith(phone_numbers[i]):
            return False
    return True

t = int(input())
for _ in range(t):
    n = int(input())
    phone_numbers = [input().strip() for _ in range(n)]
    if is_consistent(phone_numbers):
        print("YES")
    else:
        print("NO")