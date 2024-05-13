import sys

N = int(input())                                                                    # N개의 수

N_list = list(map(int, sys.stdin.readline().split()))                               # N개의 수 값 입력

N_list = sorted(N_list)                                                             # 입력받은 값 정렬
#print(N_list)

good = 0                                                                            # Good 조건 count 값


for i in range(N):

    compare = N_list[:i] + N_list[i+1:]                                             # 어떤 수가 다른 두 수개의 합을 나타낼때 "어떤 수" 뺀 리스트 만들기
    #print("compare list [", compare, "]---------------")
    left = 0    # 왼쪽 포인터 초기값
    right = len(compare) - 1   # 오른쪽 포인터 초기값

    while left < right:                                                             # 왼쪽포인터가 오른쪽 포인터보다 같거나 커질때까지 반복
        result = compare[left] + compare[right]

        if result == N_list[i]:                                                     # 두 수의 합이 비교할 값과 같을 경우
            good += 1
            #print("find good")
            #print("left:", left, N_list[left], "| right:", right, N_list[right])
            #print("------------------------------")
            break

        elif result > N_list[i]:
            right -= 1

        else:
            left += 1

print(good)