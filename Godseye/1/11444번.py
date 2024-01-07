import sys

num = int(sys.stdin.readline())
dic = {}


def fibo(n):
    if n in dic:
        return dic[n]

    if n == 0:
        dic[0] = 0
        return 0
    if n == 1:
        dic[1] = 1
        return 1
    if n == 2:
        dic[2] = 1
        return 1

    if n % 2 == 0:
        dic[n // 2 + 1] = fibo(n // 2 + 1) % 1000000007
        dic[n // 2 - 1] = fibo(n // 2 - 1) % 1000000007
        return dic[n // 2 + 1] ** 2 - dic[n // 2 - 1] ** 2
    else:
        dic[n // 2 + 1] = fibo(n // 2 + 1) % 1000000007
        dic[n // 2] = fibo(n // 2) % 1000000007
        return dic[n // 2 + 1] ** 2 + dic[n // 2] ** 2


ans = fibo(num) % 1000000007
print(ans)
