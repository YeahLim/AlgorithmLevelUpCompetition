import sys

sum_point = float(0.0)                                                          # 과목별 학점들 합
sum_Score = float(0.0)                                                          # 과목별 점수 합
dic = {'A+':4.5, 'A0':4, 'B+':3.5, 'B0':3, 'C+':2.5, 'C0':2, 'D+':1.5, 'D0':1, 'F':0}
#print(sum_point)


for i in range(20):
    Subject, point, Score = list(map(str, sys.stdin.readline().split()))        # 20번 반복하여 과목, 학점의 점수와 등급을 입력 받는다.
    point = float(point)

    if Score == 'P':
        sum_point += 0

    else:
        sum_point += point
        sum_Score += dic[Score]*point

#    print(sum_Score, sum_point)

    #print(round(sum_point, 6), cnt)
#print(sum_Score, sum_point)
result = float(sum_Score /sum_point )
print(round(result, 6))