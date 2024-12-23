import sys
input = sys.stdin.readline

# (1 ≤ N ≤ 20, |S| ≤ 1,000,000)
N, S = map(int, input().split())

number = list(map(int, input().split()))
cnt = 0
temp = []

def backTracking(start):
    #print("함수 호출됨")
    global cnt

    if sum(temp) == S and len(temp) > 0:    # 배열에 값이 들어있고, 수열의 합이 S와 같다면 조건에 해당됨
        #print("***** 현재 수열의 합이 S와 같음 *****")
        #print(temp, "따라서 cnt 값 증가: ")

        cnt += 1                            # cnt 1 증가.
        #print("증가된 cnt 값:", cnt)

    # 모든 경우의 수열을 탐색
    for i in range(start, N):
        temp.append(number[i])
        #print(temp)

        # 재귀함수 호출
        # start가 N과 같아질 경우 이 반복문은 실행이 안되고 배열에 있는 값이 S와 같은지만 확인하고 빠져 나올거임 -> 해당 깊이의 끝
        backTracking(i + 1)

        temp.pop()

backTracking(0)

print(cnt)