import sys
input = sys.stdin.readline

A, B = map(int, input().split())
cnt = 1         # 반복 연산 횟수
arr = [A]
result = 0

while True:
    cnt += 1

    # 이전의 값에서 두가지 선택지 경우를 계산해 배열에 담아 하나의 열로 만들자.
    temp = []
    for i in arr:
        multi_2 = i * 2             # 2를 곱했을 경우의 변수
        add_1 = int(str(i) + "1")   # 1을 우측에 추가할 경우의 변수

        # B보다 작을때만 배열에 추가해주자
        if B > multi_2:
            temp.append(multi_2)
        elif B == multi_2:
            print("***** 현재 값이 B와 같음, A가 B가 됨! *****")
            print("현재 cnt 값:", cnt)
            result = cnt
            break

        if B > add_1:
            temp.append(add_1)
        elif B == add_1:
            print("***** 현재 값이 B와 같음, A가 B가 됨! *****")
            print("현재 cnt 값:", cnt)
            result = cnt
            break

    arr = sorted(temp)

    # 결과값이 들어온 경우, 정답 출력 후 반복을 멈춤
    if result > 0:
        print(result)
        break
    print("----- 현재 배열 값과 반복 횟수 -----")
    print(arr, cnt)

    # 모든 계산한 값이 B보다 전부 커서 배열에 값이 없을 경우
    if len(arr) < 1:
        print("비교 배열에 담긴 값이 없음... 즉 A는 B가 될 수 없다.")
        print(-1)
        break
