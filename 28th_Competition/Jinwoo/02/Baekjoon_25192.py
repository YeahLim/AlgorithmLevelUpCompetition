import sys

N = int(input())                                                # 채팅방 기록수: N

cnt = 0                                                         # 이모티콘 사용 횟수
user = set()                                                    # set()을 사용하여 채팅방 user 정보를 담는다. set은 중복을 허용하지 않음

for i in range(N):
    temp = sys.stdin.readline().strip()                         # 채팅방 user 닉네임 or 'ENTER'입력

    if temp == 'ENTER':                                         # 'ENTER'가 입력될 경우
        cnt += len(user)                                        # 현재 입력된 user 개수를 cnt에 추가
        user = set()                                            # 배열 초기화

    else:                                                       # 닉네임이 입력된 경우
        user.add(temp)                                          # set 자료형에 추가
        #print(user)
cnt += len(user)                                                # 마지막 입력값을 마지막으로 cnt에 추가

#print(user)
print(cnt)                                                      # cnt 출력