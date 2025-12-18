import sys
L, R = map(str, sys.stdin.readline().split())
count = 0

if L == R:
    count = str(L).count('8')
elif len(L) == len(R):
    for i in range(len(L)):
        if L[i] == '8' and R[i] == '8':
            count += 1
        elif L[i] != R[i]:
            break

print(count)