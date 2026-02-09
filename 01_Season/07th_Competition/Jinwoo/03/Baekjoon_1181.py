import sys                                                          # sys 라이브러리 불러오기
N = int(input())                                                    # 줄값 N을 선언하여 입력
word_list = []                                                      # 처음에 문자열 값을 받고 중복값을 정리할 리스트
len_list = []                                                       # 중복값 정리 후 길이, 사전식으로 정렬할 리스트

for i in range(N):
    word = sys.stdin.readline().strip()                             # N만큼 문자열을 받아 word에 넣기
    word_list.append(word)                                          # 받은 문자열 word를 word_list.append(word)를 통해 리스트에 추가하기

word_list = set(word_list)                                          # set() 함수로 중복값 제거

for i in word_list:                                                 # 중복값을 제거한 리스트를
    x = [len(i), i]                                                 # 문자열 길이와 문자열 값을 x에 넣은 후
    len_list.append(x)                                              # 리스트 x를 len_list에 넣어 2중 배열을 만든다.

len_list.sort()                                                     # 0번째 -> 1번째 순으로 우선순위를 두어 0번째 문자열 길이를 비교 후 같을경우 사전식으로 정렬하도록 sort() 함수를 사용

for i in range(len(len_list)):                                      # for문을 통하여 문자열 길이 > 사전식 으로 정렬된 len_list i번째의 첫번째 값(문자열)을 반복하여 출력
    print(len_list[i][1])