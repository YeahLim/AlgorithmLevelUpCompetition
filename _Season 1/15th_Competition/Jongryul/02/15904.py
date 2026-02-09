import sys
input = sys.stdin.readline

s = input().rstrip()

def Check(s):
    check = ['U', 'C', 'P', 'C']
    idx = 0
    for i in s:
        if i == check[idx]:
            idx += 1
            if idx == 4:
                return 'I love UCPC'
    return 'I hate UCPC'
print(Check(s))