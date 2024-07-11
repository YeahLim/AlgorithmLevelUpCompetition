import sys

file = sys.stdin.readline().strip()                                                         # 문서 최대 길이 2500
search = sys.stdin.readline().strip()                                                       # 검색할 단어 최대 50

i = 0
cnt = 0

while i < len(file):                                                                        # 반복문을 통해 문서의 첨부터 끝까지 확인해보자
    if file[i:i+len(search)] == search:                                                     # i를 1씩 증가시켜 검색할 단어 처음부터 끝값이 같다면
        i += len(search)                                                                    # 찾은 단어만큼 i를 더해주고(경우를 제외)
        cnt += 1                                                                            # cnt를 1 올려주자

    else:                                                                                   # 같지 않다면
        i += 1                                                                              # 포인터 1 증가

print(cnt)                                                                                  # 경우의 수를 센 cnt 출력