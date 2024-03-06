import sys                                                              # sys 라이브러리 사용
N = int(input())                                                        # 입력받을 줄 수 N 선언 후 입력
xy_list = []

for i in range(N):                                                      # for문을 통해 i만큼
    xy = list(map(int, sys.stdin.readline().split()))                   # x(i), y(i) 좌표를 입력받아 리스트를 만듭니다. (x(i), y(i))
    xy_list.append(xy)                                                  # 입력받은 리스트를 xy_list 안에 넣어 2중 리스트로 만듭니다. (값을 비교하기 위해)

xy_list.sort(key = lambda x: (x[1], x[0]))                              # 2중 리스트를 sort()함수로 안에 함수를 2중리스트의 1번째 값이 우선순위가 되도록 설정한 후 오름차순으로 정렬합니다.

for i in range(N):                                                      # 오름차순으로 정렬이 끝난 xy_list 를 N만큼 반복하여
    print(xy_list[i][0], xy_list[i][1])                                 # xy_list 리스트 i번째의 0번째값과 1번째값을 출력합니다.