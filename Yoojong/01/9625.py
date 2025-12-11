import sys
k = int(sys.stdin.readline())
fibonacci = [0] * (k + 1)
fibonacci[1] = 1

for i in range(2, k + 1):
    fibonacci[i] = fibonacci[i-1] +  fibonacci[i-2]
print(fibonacci[k-1], fibonacci[k])