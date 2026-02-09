import sys

input = sys.stdin.readline

def is_multiple_of_three(n):
    return n % 3 == 0

def sum_of_digits(n):
    return sum(int(digit) for digit in str(n))

def solve(n):
    count = 0
    while len(n) > 1:
        n = str(sum_of_digits(n))
        count += 1

    result = "YES" if is_multiple_of_three(int(n)) else "NO"
    return count, result


n = input().strip()
count, result = solve(n)
print(count)
print(result)
