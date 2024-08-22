import sys

input = sys.stdin.readline

result = []

while True:
    n = int(input())

    if n == 0:
        break

    lst = []
    for _ in range(n):
        name = input().strip()
        lst.append(name)

    check_lst = []
    for _ in range(2*n - 1):
        check = list(input().strip())
        check_lst.append([int(check[0])])

    for i in range(1,n+1):
        if check_lst.count(i) != 2:
            result.append(lst[i-1])

for i in range(len(result)):
    print(f'{i+1} {result[i]}')
