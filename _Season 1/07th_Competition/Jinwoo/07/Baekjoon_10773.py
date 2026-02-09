import sys                                  # sys 라이브러리 불러오기
K = int(input())                            # 입력받을 수의 갯수 K 입력
stack = []                                  # 스택 리스트 선언
# 시간복잡도 O(1)

for i in range(K):                          # K만큼 반복하여
    k_input = int(sys.stdin.readline())     # 수를 입력 받는다.

    if k_input == 0:                        # 입력받은 수가 0이라면
        stack.pop(-1)                       # pop을 사용하여 stack 리스트의 마지막 값을 제거한다.
    else:
        stack.append(k_input)               # 0이 아닐 경우 리스트에 값을 추가한다.
print(sum(stack))                           # 리스트의 총합을 출력한다.
# 시간복잠도 O(N)