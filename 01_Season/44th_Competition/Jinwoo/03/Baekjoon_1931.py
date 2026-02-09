import sys
input = sys.stdin.readline

N = int(input())        # 회의의 개수: N
arr = []
cnt = 1

# 회의실 예약 시간들 입력 받은 후 이중배열로 넣어주기
for i in range(N):
    room_reservation = list(map(int, input().split()))
    arr.append(room_reservation)
#print(arr)

# 끝나는 시간 순으로 정렬
arr.sort(key=lambda x: (x[1], x[0]))
#print(arr)

find_start = arr[0]     # 끝나는 시간이 가장 작은 타임을 변수에 담고 이 값을 기준으로 다음 타임을 찾는다.
#print("----- 첫 회의 선택 -----")
#print(find_start)

for i in range(1,N):

    if find_start[1] <= arr[i][0]:  # 이전 회의의 끝나는 시간보다 같거나 커야 다음 회의를 진행할 수 있음
        find_start = arr[i]         # 이전 회의 값을 현재 선택한 회의로 바꿔주자 => 끝나는 시간을 기준으로 정렬이 되어 있으므로 처음 조건에 걸리는 부분이 최적의 값임.
        cnt += 1
        #print("-----", cnt, "번째 회의 -----")
        #print(find_start)

print(cnt)