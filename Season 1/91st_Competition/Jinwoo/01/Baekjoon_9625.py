K = int(input())

a, b = 1, 0  # A=1, B=0 at K=0
for _ in range(K):
    a, b = b, a + b

print(a, b)
