import sys

input = sys.stdin.readline


def kth_perm(n, k):
    numbers = list(range(1, n + 1))
    result = []
    k = k - 1

    f = [1] * (n + 1)
    for i in range(1, n + 1):
        f[i] = f[i - 1] * i

    for i in range(n - 1, -1, -1):
        if k == 0:
            result.extend(numbers)
            break
        idx = k // f[i]
        k = k % f[i]
        result.append(numbers.pop(idx))
    return result


def perm_order(n, perm):
    numbers = list(range(1, n + 1))
    result = 0

    f = [1] * (n + 1)
    for i in range(1, n + 1):
        f[i] = f[i - 1] * i

    for i in range(n):
        num = perm[i]
        idx = numbers.index(num)
        result += idx * f[n - 1 - i]
        numbers.pop(idx)
    return result + 1


n = int(input())
query = list(map(int, input().split()))

if query[0] == 1:
    k = query[1]
    answer = kth_perm(n, k)
    print(*answer)
else:
    perm = query[1:]
    answer = perm_order(n, perm)
    print(answer)