num_list = []

for i in range(5):
    num_list.append(int(input()))

num_list.sort()                                             # 리스트 오름차순으로 정렬
average = sum(num_list) // (len(num_list))                  # 리스트 평균값

print(average)                                              # 리스트 평균값 출력
print(num_list[2])                                          # 리스트 중앙값 출력 (입력줄 수가 5개로 지정되어 있으므로 num_list[2]가 중앙값이다.
