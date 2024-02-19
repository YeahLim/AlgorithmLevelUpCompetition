import sys
n, m = map(int, sys.stdin.readline().split())
Nlist = list(map(int, sys.stdin.readline().split()))
result =[]

for i in range(n):
    for j in range(i + 1, n):
       for k in range(j + 1, n):
            if (Nlist[i] + Nlist[j] + Nlist[k]) <= m :
                result.append(Nlist[i] + Nlist[j] + Nlist[k])
print(max(result))

