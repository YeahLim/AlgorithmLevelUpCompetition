import sys
input = sys.stdin.readline

x = int(input())

if x == 0:
    print("NO")
else:
    while x:
        if x % 3 > 1:
            print("NO")
            break
        x //= 3
    else:
        print("YES")
