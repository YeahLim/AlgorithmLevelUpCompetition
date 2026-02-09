import sys
x = sys.stdin.readline().rstrip()
new = ''
i = 0

while i < len(x):
    if x[i] == '.':
        new += '.'
        i += 1

    elif x[i:i+4] == 'XXXX':
        new += 'AAAA'
        i += 4

    elif x[i:i+2] == 'XX':
        new += 'BB'
        i += 2

    else:
        new = -1
        break


print(new)