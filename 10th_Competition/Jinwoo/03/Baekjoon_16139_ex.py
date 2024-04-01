import sys

input = sys.stdin.readline


Str = input().strip()                                                             # 문자열 S 소문자로만 구성
n = int(input())                                                                # 질문 갯수 n

sum_list = [[0 for i in range(26)] for i in range(len(Str))]                      # 문자열의 값과 그 값 알파벳의 아스키코드값을 저장할 2차원 배열
sum_list[0][ord(Str[0]) - 97] = 1                                                 # 누적합 r - l을 위해 0번째 값을 예외 처리 한다.
#print(sum_list)

for i in range(1, len(Str)):                                                      # 입력받은 문자열을
    sum_list[i][ord(Str[i]) - 97] = 1                                             # i번째의 아스키코드 인덱스값을 1로 만든다.
    for j in range(26):
        sum_list[i][j] += sum_list[i-1][j]                                      # 그리고 전번째의 아스키 코드값을 누적하여 합한다. abca가 들어왔다면 [[1,0,0,0...],[1,1,0,0...],[1,1,1,0...],[2,1,1,0...]]
# 시간 복잡도 O(N)
#print(sum_list)

for i in range(n):                                                              # 질문의 수 n만큼 반복하여
    a, b, c = map(str, sys.stdin.readline().split())                            # 확인할 문자 a와 범위 l, c를 문자열 형태로 a, b, c 받아준다.
    l = int(b)                                                                  # b에 인테자를 씌어 정수로 만들어 준 후 l에 넣는다.
    r = int(c)                                                                  # c에 인테자를 씌어 정수로 만들어 준 후 r에 넣는다.

    if l > 0:
        result = sum_list[r][ord(a)-97] - sum_list[l - 1][ord(a)-97]
    else:
        result = sum_list[r][ord(a) - 97]
    print(result)
# 시간 복잡도 O(N)