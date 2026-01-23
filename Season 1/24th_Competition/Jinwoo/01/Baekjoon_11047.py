import sys
N, K = map(int, sys.stdin.readline().split())                                           # 갖고있는 동전 종류: N, 가치의 합: K
coins = []

for i in range(N):                                                                      # N만큼 coin 값 입력받기
    coins.append(int(input()))
coins.sort(reverse=True)                                                                # 코인값 역순 정렬
#print(coins)

cnt_coin = 0                                                                            # 가치의 합에 부합하게 하도록 하는데에 필요한 coin 갯수를 담을 변수
for i in range(N):
    if K >= coins[i]:                                                                   # 동전값이 K보다 작을 경우
        cnt_coin += K // coins[i]                                                       # 몇 번 나눌 수 있는지 구한후 동전 cnt에 추가
        #print("----------------------")
        #print(coins[i], "원 짜리 동전")
        #print(K // coins[i], "개 추가")
        #print("총 동전 갯수:", cnt_coin)

        K = K % coins[i]                                                                # 나머지 값 K로 옮겨주기

        if K <= 0:                                                                      # K가 0 이하가 될 경우
            break                                                                       # 이미 부합하는 수를 구했으므로 반복문 탈출

print(cnt_coin)                                                                         # 값 출력
