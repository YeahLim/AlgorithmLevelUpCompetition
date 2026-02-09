import sys
input = sys.stdin.readline

INF = 200001
ON = 1
OFF = 0

n = int(input().strip())
input_values = list(map(int, input().strip().split()))
on_off = list(map(int, input().strip().split()))

min_value = min(input_values)
result = sum(input_values[i] for i in range(n) if on_off[i] == ON)

sum_value = 0
max_value = 0
for i in range(n):
    if on_off[i] == OFF:
        sum_value += input_values[i]
    if on_off[i] == ON:
        sum_value -= input_values[i]
    if sum_value < 0:
        sum_value = 0
    max_value = max(sum_value, max_value)

if max_value == 0:
    print(result - min_value)
else:
    print(result + max_value)



