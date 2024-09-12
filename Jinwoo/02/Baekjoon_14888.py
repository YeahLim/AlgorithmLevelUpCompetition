# 나눗셈 처리를 위한 함수 (C++의 나눗셈과 동일한 처리)
def operate(a, b, op):
    if op == 0:  # 덧셈
        return a + b
    elif op == 1:  # 뺄셈
        return a - b
    elif op == 2:  # 곱셈
        return a * b
    elif op == 3:  # 나눗셈
        if a < 0:
            return -(-a // b)
        else:
            return a // b


# 백트래킹을 사용한 함수: 현재 상태에서 가능한 연산자를 탐색하며 계산을 진행
def backtrack(idx, current_result, plus, minus, multiply, divide):
    global max_value, min_value

    # 모든 연산자를 사용한 경우, 최댓값과 최솟값 갱신
    if idx == N:
        max_value = max(max_value, current_result)
        min_value = min(min_value, current_result)
        return

    # 각 연산자가 남아있을 때 해당 연산을 수행하고, 그 결과로 재귀 호출
    if plus > 0:
        backtrack(idx + 1, operate(current_result, numbers[idx], 0), plus - 1, minus, multiply, divide)
    if minus > 0:
        backtrack(idx + 1, operate(current_result, numbers[idx], 1), plus, minus - 1, multiply, divide)
    if multiply > 0:
        backtrack(idx + 1, operate(current_result, numbers[idx], 2), plus, minus, multiply - 1, divide)
    if divide > 0:
        backtrack(idx + 1, operate(current_result, numbers[idx], 3), plus, minus, multiply, divide - 1)


# 입력
N = int(input())  # 수의 개수
numbers = list(map(int, input().split()))  # N개의 숫자
plus, minus, multiply, divide = map(int, input().split())  # 덧셈, 뺄셈, 곱셈, 나눗셈의 개수

# 최댓값, 최솟값을 저장할 변수 초기화
max_value = -float('inf')
min_value = float('inf')

# 백트래킹을 이용해 연산자 순열을 만들어가며 탐색 시작
backtrack(1, numbers[0], plus, minus, multiply, divide)

# 결과 출력
print(max_value)
print(min_value)
