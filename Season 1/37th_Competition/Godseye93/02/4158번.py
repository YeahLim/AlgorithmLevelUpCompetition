import sys

input = sys.stdin.readline

while True:
    n,m = map(int,input().split())
    if n == 0 and m == 0:
        break
    n_lst = []
    m_lst = []

    for _ in range(n):
        num = int(input())
        n_lst.append(num)

    for _ in range(m):
        num = int(input())
        m_lst.append(num)

    lst = set(n_lst + m_lst)
    a = len(lst) - len(n_lst)
    b = len(m_lst) - a

    print(b)