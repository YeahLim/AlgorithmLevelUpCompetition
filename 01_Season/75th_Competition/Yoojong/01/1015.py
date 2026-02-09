import sys


N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))
sortA = sorted(A, reverse=False)

P = []
for i in range(N):
    P.append(sortA.index(A[i]))
    sortA[sortA.index(A[i])] = -1

for i in range(N):
    print(str(P[i]), end=' ')