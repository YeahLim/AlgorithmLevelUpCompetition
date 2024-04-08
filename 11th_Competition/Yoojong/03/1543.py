import sys
message = sys.stdin.readline().rstrip()
find = sys.stdin.readline().rstrip()
ans = message.split(find)
print(len(ans)-1)

