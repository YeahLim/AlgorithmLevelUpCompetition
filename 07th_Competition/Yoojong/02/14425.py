#interpreter가 anaconda로 설정 되어있는지 확인
# 중단점 지정하고 shift + f9 : 디버그모드로 중간에서 멈춤
# 디버그모드에서 코드 멈추면 f8로 하나씩 진입 가능

import sys
n, m = map(int, sys.stdin.readline().split())

s = set()
for _ in range(n):
    s.add(sys.stdin.readline().rstrip())

ans = 0
for _ in range(m):
    word = sys.stdin.readline().rstrip()
    s.add(word)
    #같지 않다.
    if n != len(s):
       s.remove(word)
    #같아
    else:
        ans+=1
print(ans)