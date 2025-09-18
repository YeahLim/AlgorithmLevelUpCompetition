import sys
n,m = map(int, sys.stdin.readline().split())

p = []
for _ in range(m):
  p.append(int(sys.stdin.readline()))

p.sort() 

result = 0
A = 0
for i in range(m):
  cnt = m-i 
  
  if n  <= cnt: 
    sum = n * p[i]
  else:
    sum = cnt * p[i]
  
  if sum > result:
    result = sum
    A = p[i]

print("%d %d" %(A, result))
