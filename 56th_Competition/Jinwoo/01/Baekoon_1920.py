import sys
input = sys.stdin.readline

def binary_search(target, data):
    # print(i, "이 있는가?")
    start = 0
    end = len(data) - 1

    while start <= end:
        mid = (start + end) // 2

        # 찾는 값이 mid보다 작다면 이분 탐색한 쪽의 왼쪽을 더 탐색
        if N_list[mid] > target:
            end = mid - 1

        # 찾는 값이 mid보다 크다면 이분 탐색한 쪽의 오른쪽을 더 탐색
        elif N_list[mid] < target:
            start = mid + 1

        else:
            return 1
    return 0

N = int(input())
N_list = list(map(int, input().split()))
N_list.sort()
#print(N_list)

M = int(input())
check_list = list(map(int, input().split()))

for i in check_list:

    # 확인해야할 값이 있으면 1을 반환하여 참, 없으면 0을 반환하여 거짓
    if binary_search(i, N_list):
        print(1)
    else:
        print(0)