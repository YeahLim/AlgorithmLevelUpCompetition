import sys

input = sys.stdin.readline

def num_to_word(n):
    words = ['zero', 'one', 'two', 'three', 'four',
             'five', 'six', 'seven', 'eight', 'nine']
    if n < 10:
        return words[n]
    else:
        return words[n//10] + ' ' + words[n%10]

M, N = map(int, input().split())
numbers = []

for i in range(M, N + 1):
    numbers.append((num_to_word(i), i))

numbers.sort()

for i in range(len(numbers)):
    print(numbers[i][1], end=' ')
    if (i + 1) % 10 == 0:
        print()