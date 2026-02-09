import sys
import math

input = sys.stdin.readline

a,b,l = map(int,input().split())

def divisor(n):
    can = []
    for i in range(1, int(math.sqrt(n))+1):
        if n%i==0:
            can.append(i)
            can.append(n//i)
    return sorted(can)


if math.lcm(a,b) == l:
    print(1)
elif l%math.lcm(a,b)!=0:
    print(-1)
else:
    ab = math.lcm(a,b)
    for c in divisor(l):
        if math.lcm(ab, c)==l:
            print(c)
            break