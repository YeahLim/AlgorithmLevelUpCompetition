import sys
import bisect
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n, m = map(int,input().split())
    a_list = list(map(int,input().split()))
    b_list = list(map(int,input().split()))

    a_list.sort()
    b_list.sort()

    cnt = 0
    for i in a_list:
        cnt += (bisect.bisect(b_list, i-1))
    print(cnt)