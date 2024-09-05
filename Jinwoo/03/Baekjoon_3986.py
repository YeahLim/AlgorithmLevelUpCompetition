# '좋은 단어'의 개수를 세는 함수
def good_word(word):
    stack = []  # 스택을 사용하여 문자를 처리

    for char in word:
        if stack and stack[-1] == char:  # 스택의 맨 위 글자와 현재 글자가 같으면 짝을 이룬다.
            stack.pop()  # 짝을 이룬 두 글자를 제거
        else:
            stack.append(char)  # 그렇지 않으면 현재 글자를 스택에 추가

    # 스택이 비어있다면 '좋은 단어'
    return len(stack) == 0


# 입력
N = int(input())  # 단어의 수
good_word_count = 0  # '좋은 단어'의 개수를 셀 변수

# N개의 단어에 대해 '좋은 단어'인지 확인
for _ in range(N):
    word = input().strip()
    if good_word(word):
        good_word_count += 1  # '좋은 단어'이면 카운트 증가

# 결과 출력
print(good_word_count)
