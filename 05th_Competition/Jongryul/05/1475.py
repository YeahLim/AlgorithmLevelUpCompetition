import math
n = input()

arr = [0] * 10
for i in n:
	arr[int(i)] += 1
arr[6], arr[9] = math.ceil((arr[6] + arr[9]) / 2), math.ceil((arr[6] + arr[9]) / 2)


print(max(arr))