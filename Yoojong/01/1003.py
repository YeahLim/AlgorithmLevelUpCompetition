import sys
n = int(sys.stdin.readline())


for _ in range(n):
    case = int(sys.stdin.readline())
    fib = [(0,0) for i in range(case+2)]
    fib[0] = (1,0)
    fib[1] = (0,1)
    if case<=1:
        print(fib[case][0], fib[case][1])
        continue
    for i in range(2, case+1):
        zero = fib[i-2][0] + fib[i-1][0]
        one = fib[i-2][1] + fib[i-1][1]
        fib[i] = (zero, one)
    print(zero, one)