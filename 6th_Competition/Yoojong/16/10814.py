import sys
n = int(sys.stdin.readline())

info = [ sys.stdin.readline().split() for i in range(n)]

info = sorted(info , key = lambda x:int(x[0]))

for i in info:
    print(i[0],i[1])