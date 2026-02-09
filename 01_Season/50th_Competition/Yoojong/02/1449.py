import sys



N , L = map(int, sys.stdin.readline().split())
arr = list(map(int, sys.stdin.readline().split(' ')))
arr.sort()

start = arr[0]-0.5
end = start + L
cnt = 1
for i in range(0, len(arr)):
  if start< arr[i] < end:
    continue
  else:
    cnt+=1
    start = arr[i]-0.5
    end = start + L

print(cnt)