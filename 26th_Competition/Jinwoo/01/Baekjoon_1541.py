import sys

Ceremony = sys.stdin.readline().strip().split('-')                                      # 숫자들을 +로 묶어준 후 -연산을 진행하면 최솟값이 나오므로 식을 -로 구분해야함
#print(Ceremony)

N_min = []

for i in Ceremony:
    sum_N = 0

    temp = i.split('+')
    #print("---- 합 묶음 ----")
    #print(temp)
    for j in temp:
        sum_N += int(j)
    N_min.append(sum_N)

result = N_min[0]
for i in range(1, len(N_min)):
    result -= N_min[i]

print(result)