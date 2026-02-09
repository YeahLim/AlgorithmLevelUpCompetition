import sys
input = sys.stdin.readline
word = list(input().rstrip())
n = int(input())
new_word = []

for i in range(n):
    command = input().split()
    if command[0] == 'L':
        if word:
            new_word.append(word.pop(-1))
    elif command[0] == 'D':
        if new_word:
            word.append(new_word.pop(-1))
    elif command[0] == 'B':
        if word:
            word.pop()
    else:
        word.append(command[1])

reserve_word = new_word[::-1]
print(''.join(word+reserve_word))