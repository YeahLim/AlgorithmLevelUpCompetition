import sys
input = sys.stdin.readline

A, B = map(int, input().split())        # N: 배열 A 크기, M: 배열 B 크기

A_list = list(map(int, input().split()))    # 배열 A 내용 입력
B_list = list(map(int, input().split()))    # 배열 B 내용 입력

# 배열 값 정렬
A_list.sort()
B_list.sort()

A_list.append(sys.maxsize)
B_list.append(sys.maxsize)

# A와 B배열 포인터 초기화
A_pointer = 0
B_pointer = 0

result = []

# 2개의 배열을 하나로 만들 경우 필요한 반복 횟수는 A+B를 초과할 수 가 없다.
for i in range(A+B):

    if A_pointer >= A:
        result.append(B_list[B_pointer])
        B_pointer += 1

    elif B_pointer >= B:
        result.append(A_list[A_pointer])
        A_pointer += 1

    else:

        if A_list[A_pointer] < B_list[B_pointer]:
            result.append(A_list[A_pointer])
            A_pointer += 1
            # print("A 포인터 증가", A_pointer)

        elif B_list[B_pointer] <= A_list[A_pointer]:
            result.append(B_list[B_pointer])
            B_pointer += 1
            # print("B 포인터 증가", B_pointer)

    #print(result)

for i in result:
    print(i, end=" ")