N = list(map(str, input()))             # 숫자를 문자열 형태로 입력받아 리스트를 만든다.
N.sort(reverse=True)                    # 그 후 숫자 리스트를 내림차순으로 정렬한다.
for i in range(len(N)):                 # 리스트의 길이만큼 반복문을 돌려
    print(N[i], end='')                 # 0번째 인덱스부터 출력한다.