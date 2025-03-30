# 방아쇠를 a 번 당겼을 때
# 총알이 한번도 발사되지 않을 확률
import sys
input = sys.stdin.readline

N = int(input())                                # 실린더 총열 개수
cylinder = list(map(int, input().split()))      # 총알이 들어있는 실린더 정보
a = int(input())                                # 당길 방아쇠 횟수

cnt = 0                                         # 분모 (모든 경우 카운트)
save_cnt = 0                                    # 분자 (총알아 한번도 발사되지 않았을 경우 카운트)

for start in range(N):
    print("---", start, "번째 실린더 시작---")

    if cylinder[start] == 0:
        cnt += 1
        print("첫발에 살았다...!")

        for i in range(1, a+1):
            if cylinder[(start + i) % N] == 1:
                print("🔫탕!!!", i, "번째 시도에서 사망...")
                break
            else:
                print("틱...")

            if i >= a:
                save_cnt += 1
                print("끝까지 살았다...")

    else:
        print("첫발에 죽음...")
print("---- 결과 보고 ----")
print("첫발에 살았을 때의 모든 경우의 수", cnt)
print("a발 추가로 쐈을때 안전한 경우의 수", save_cnt)

temp = cnt
# 분모 분자 나눠주기
while temp > 0:
    if cnt % temp == 0 and save_cnt % temp == 0:
        save_cnt = save_cnt //  temp
        cnt = cnt // temp

    temp -= 1

print("기약 분수로 출력")
print(save_cnt, cnt)
