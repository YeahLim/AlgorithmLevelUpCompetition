import sys
'''알고리즘
n = (n-1) +1
  = (n%2) +1
  = (n%3) +1
'''
num = int(sys.stdin.readline())
count = 0
num_best = [0 for i in range(num+1)]

#set
for i in range(2, num+1):
    current_best = num_best[i-1] +1
    if i %3 == 0 and num_best[i//3] + 1 < current_best:
        current_best = num_best[i//3] + 1
    if i % 2 == 0 and num_best[i // 2] + 1 < current_best:
        current_best = num_best[i // 2] + 1
    num_best[i] = current_best

print(num_best[num])