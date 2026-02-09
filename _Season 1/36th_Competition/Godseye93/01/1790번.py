import sys

input = sys.stdin.readline

n,k = map(int,input().split())

a = 0
num = 1
e = 9

while k > e*num :
  k = k - ( num * e )
  a = a + e
  e = e*10
  num += 1

ans = (a+1) + (k-1)//num

if ans > n:
    print(-1)
else:
    print(str(ans)[(k-1)%num])