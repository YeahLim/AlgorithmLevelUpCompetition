import sys

s = sys.stdin.readline().rstrip()
rlt = ''

check = 0

tmp = ''
for i in range(len(s)):
    if s[i] == '<':
        rlt += tmp[::-1]
        check = 1
        tmp = ''
    elif s[i] == '>':
        rlt += tmp + '>'
        check = 0
        tmp = ''
        continue
    elif s[i] == ' ' and not check:
        rlt += tmp[::-1] + ' '
        tmp = ''
        continue
    tmp += s[i]
rlt += tmp[::-1]
print(rlt)