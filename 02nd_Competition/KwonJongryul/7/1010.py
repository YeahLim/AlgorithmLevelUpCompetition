import sys, math
input = sys.stdin.readline

t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    rlt = math.factorial(m) // (math.factorial(n)* math.factorial(m-n))
    print(rlt)