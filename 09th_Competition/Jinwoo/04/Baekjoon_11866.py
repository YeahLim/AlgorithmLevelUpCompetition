from collections import deque

N, K = map(int, input().split())                                        # 1번부터 N명까지의 값 'N'과 요세푸스순열 값 'K'를 변수 선언 후 입력

circle = deque()                                                        # 리스트를 데큐로 구현
count = 0                                                               # 출력 양식을 위해 숫자를 몇개 출력했는지 셀 count 변수 선언

for _ in range(N):                                                      # N만큼의 리스트 열을 만든다.
    circle.append(_ + 1)

print("<", end="")

for i in range(N*K):                                                    # 반복문을 통해 첫번째 숫자를 빼서 리스트의 마지막 숫자 뒤에 추가하는 과정을 반복한다. 이것은 N*k 만큼 반복된다. N의 숫자 속에서 K만큼 숫자를 세어 나오는 숫자를 찾아야 하기 때문

    if (i+1) % K == 0:                                                  # for문의 i가 K의 배수일 때
        print(circle.popleft(), end="")                                 # 리스트의 첫번째 값을 빼내어 출력해준다.
        count += 1                                                      # 그리고 count 값을 1 더해준다.
        if count < N:                                                   # count 값이 마지막 전 값일때만
            print(",", end=" ")                                         # ,를 출력해주고 마지막 값에선 ,를 붙이지 않는다.

    else:
        circle.append(circle.popleft())                                 # i값이 3의 배수가 아닐 땐 첫번째 값을 빼내어 마지막값 뒤로 넣어준다. (이러면 값을 돌아가면서 K번째 값을 리스트 인덱스 첫번째 값에서 빼낼 수 있다.)

print(">")
#    print("----------")
#    print("바뀐 리스트", i+1, "번째")
#    print(circle)
