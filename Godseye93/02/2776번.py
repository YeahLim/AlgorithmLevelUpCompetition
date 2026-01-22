import sys

input = sys.stdin.read
data = input().split()

index = 0
T = int(data[index])
index += 1

for _ in range(T):
    N = int(data[index])
    index += 1

    note1 = set()
    for i in range(N):
        note1.add(int(data[index]))
        index += 1

    M = int(data[index])
    index += 1

    for i in range(M):
        num = int(data[index])
        index += 1
        print(1 if num in note1 else 0)