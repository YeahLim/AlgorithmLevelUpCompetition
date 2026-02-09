import sys
input = sys.stdin.readline

K, N = map(int, input().split())    # K: 갖고 있는 랜선의 개수, N: 필요한 랜선의 개수

LAN = [int(input()) for i in range(K)]   # 갖고있는 랜선 길이
LAN.sort()
# print(LAN)


start = 1
end = LAN[K-1]  # 갖고 있는 랜선 최대 길이부터 탐색 시작

while start <= end:
    # print("start", start)
    # print("end", end)
    # print("------------")

    # 랜선 길이 탐색 범위의 중앙값(이분 탐색)
    mid = (start + end) // 2
    temp = 0

    # 중앙값으로 갖고 있는 랜선을 나눠 몇개를 만들 수 있는지 temp에 넣어준다.
    for i in range(K):
        temp += LAN[i] // mid

    # 만들 수 있는 랜선이 필요한 수보다 부족하다면 최대 길이 줄이기
    if temp < N:
        end = mid - 1

    # 만들 수 있는 랜선이 필요한 수보다 부족하지 않다면 최대 길이 늘려서 최댓값 찾기
    else:
        start = mid + 1
print(end)