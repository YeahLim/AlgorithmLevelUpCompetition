import sys

N = int(input())                                        # 온라인 저지 회원의 수 N 선언
# 시간 복잡도 (N)

N_list = []

for i in range(N):                                      # N만큼 for문을 통해 반복하여
    age, name = sys.stdin.readline().split()            # 나이와 이름을 입력받는다.
    age = int(age)                                      # 나이는 정수형이므로 변환해주어 다시 넣어준다.
    N_list.append([age, name, i])                       # N_list에 입력받은 값을 2차원 배열 리스트 만들기, 몇번째로 입력되었는지 알기 위해 입력 순서도 리스트에 추가한다.
# 시간복잡도 (4N)

N_list.sort(key = lambda x: (x[0], x[2]))               # 나이순, 나이가 같으면 가입한 순으로 정렬해야 하므로 2차원 [리스트의 0번째 값 > 2번째값] 우선순위로 오름차순 정렬을 하면 된다. 따라서 sort()의 key = lambda x: (x[0], x[2]) 으로 오름차순 정렬을 해준다.
# 시간복잡도 (3N)

for i in range(N):                                      # 정렬된 리스트를 N번만큼 반복하여 출력해준다.
    print(N_list[i][0], N_list[i][1])
# 시간복잡도 (2N)