import sys

input = sys.stdin.readline

m, d = map(int, input().split())
diff = d - m

if diff <= 2:
    print(diff)
else:
    n = 1
    while True:
        max_dogs = n * (n + 1) + (n + 1)
        min_dogs = n * (n + 1)

        if min_dogs < diff <= max_dogs:
            print(n * 2 + 1)
            break
        if max_dogs < diff <= (n + 1) * (n + 2):
            print(n * 2 + 2)
            break
        n += 1
