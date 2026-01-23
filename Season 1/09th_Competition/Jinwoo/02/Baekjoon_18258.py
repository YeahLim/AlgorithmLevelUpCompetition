'''
push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
'''


import sys                                                                  # sys 선언
from collections import deque                                               # collections 파일에 deque가 포함되어 있다. 따라서 deque 자료구조를 사용하기 위해서는 다음과 같이 선언해줘야 한다.

N = int(input())                                                            # 입력받을 명령어 줄 선언
# 시간 복잡도 O(N)

Q = deque()                                                                 # 변수 Q를 deque를 통해 '큐'를 구현해준다.

for i in range(N):
    Q_list = list(sys.stdin.readline().split())                             # 공백을 기준으로 입력된 명령어 문자열과 정수 값 X를 나눠주었다. 명령어 문자열은 인덱스 0번 값에, 정수 X는 인덱스 1번값에 저장한다.

    if Q_list[0] == 'push':                                                 # 인덱스 0번값에 'push'가 들어왔을 경우
        Q.append(Q_list[1])                                                 # 리스트 1번값의 정수 X를 Q의 리스트 오른쪽에 넣어준다.

    elif Q_list[0] == 'pop':                                                # 인덱스 0번값에 'pop'이 들어왔을 경우
        if Q:                                                               # Q 리스트에 값이 존재할 경우
            print(Q.popleft())                                              # 리스트의 첫번째 값을 출력한 후 삭제
        else:                                                               # 없을 경우
            print(-1)                                                       # -1 출력

    elif Q_list[0] == 'size':                                               # 인덱스 0번값에 'size'가 들어왔을 경우
        print(len(Q))                                                       # Q 리스트의 길이 출력 (리스트에 정수만 들어가므로 길이 = 정수의 개수)
        # len() 시간복잡도 O(1)

    elif Q_list[0] == 'empty':                                              # 인덱스 0번값에 'empty'가 들어왔을 경우
        if Q:                                                               # Q 리스트에 값이 존재할 경우
            print(0)                                                        # 0 출력
        else:                                                               # 없을경우
            print(1)                                                        # -1 출력

    elif Q_list[0] == 'front':                                              # 인덱스 0번값에 'front'가 들어왔을 경우
        if Q:                                                               # Q 리스트에 값이 존재할 경우
            print(Q[0])                                                     # 첫번째 정수 출력
        else:                                                               # 없을 경우
            print(-1)                                                       # -1 출력

    elif Q_list[0] == 'back':                                               # 인덱스 0번값에 'back'이 들어왔을 경우
        if Q:                                                               # Q 리스트에 정수가 존재할 경우
            print(Q[-1])                                                    # 마지막 정수 출력
        else:                                                               # 없을 경우
            print(-1)                                                       # -1 출력
# 시간복잡도 O(N)
    #print(Q)

