import sys
input = sys.stdin.readline

n = int(input())

def ha(n, a, b, c):
    if n == 1:
        move.append([a,c])
    else:
        ha(n-1, a,c,b)
        move.append([a,c])
        ha(n-1, b, a,c)

move = []
if n<= 20:
    ha(n,1,2,3)
    print(len(move))
    for i in move:
        print(*i)
else:
    print(2**n -1)