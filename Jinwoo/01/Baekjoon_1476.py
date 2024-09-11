import sys

# 입력
EARTH, SUN, MOON = map(int, sys.stdin.readline().split())

# 초기값 설정
year = 1
earth, sun, moon = 1, 1, 1  # 시작 연도는 1 1 1

# E, Sun, M 값과 일치할 때까지 반복
while True:
    if earth == EARTH and sun == SUN and moon == MOON:  # 주어진 E, Sun, M과 일치하면 종료
        print(year)
        break
    # 연도를 1씩 증가시키며 e, s, m 값을 갱신

    # 연도를 1 증가
    year += 1

    # earth 값 갱신: 15를 넘어가면 1로 되돌아감
    if earth < 15:
        earth += 1
    else:
        earth = 1

    # sun 값 갱신: 28을 넘어가면 1로 되돌아감
    if sun < 28:
        sun += 1
    else:
        sun = 1

    # moon 값 갱신: 19를 넘어가면 1로 되돌아감
    if moon < 19:
        moon += 1
    else:
        moon = 1

