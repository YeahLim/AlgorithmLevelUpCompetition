import sys

# input = sys.stdin.readline

n = list(input())
number = [0] * 10

for i in n:
    if int(i) == 9:
        i = 6
    number[int(i)] += 1

number[6] = (number[6]+1)//2

print(max(number))