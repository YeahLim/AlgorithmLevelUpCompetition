import sys
N = int(input())
cnt = N

for i in range(N):
    word = list(sys.stdin.readline().strip())
    #set_word = set(word)

    for j in range(len(word) - 1):          # 입력받은 문자열 값 탐색
        if word[j] == word[j + 1]:          # 현재값과 다음값이 같을 경우 pass
            pass
        elif word[j] in word[j + 1:]:       # 현재값과 다음값이 다를 경우 현재값의 다음부터 중복되는 값이 있을 경우
            cnt -= 1                        # 조건에 해당되지 않으므로 cnt를 제외한다.
            break
print(cnt)