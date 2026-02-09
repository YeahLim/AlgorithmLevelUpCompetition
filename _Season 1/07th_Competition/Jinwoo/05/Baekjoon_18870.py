N = int(input())                                                        # 입력할 좌표 갯수 N 입력

N_list = list(map(int, input().split()))                                # X(n) 좌표 리스트에 입력, split()을 통해 공백 한 칸으로 구분
# 시간복잡도 O(N)
Set_list = list(map(int, set(N_list)))                                  # N_list의 중복값을 없애준 후 Set_list에 담는다.
# 시간복잡도 O(N)

Set_list.sort()                                                         # 그리고 Set_list를 오름차순으로 정렬해준다.
# 시간복잡도 O(NlogN)

dic = {Set_list[i]:i for i in range(len(Set_list))}                     # 현재 Set_list의 index 값이 좌표압축 조건에 해당되는 값이다. 딕셔너리를 사용하여 Set_list[0] = 0, Set_list[1] = 1 로 값을 출력하기 위해 딕셔너리를 활용하여 '키:값'인 형태로 선언한다.
# 시간복잡도 O(N)

for i in N_list:                                                        # for 문을 활용하여 입력받은 순서대로의 좌표값을
    print(dic[i], end=' ')                                              # 선언해놓은 딕셔너리를 활용하여 Set_list의 인덱스 값을 출력하게 하였다.
# 시간복잡도 O(N)
