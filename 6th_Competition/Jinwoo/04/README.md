# [백준 - 실버 5] 영화감독 숌 (1436번)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

브루트포스 알고리즘

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**

1. 연속으로 666이 오는 N번째 숫자를 확인해야하는 문제이다.
2. 첫번째는 666이므로 666이전의 숫자는 셀 필요가 없다.
3. N번째로 666이 연속으로 오는 숫자를 찾기 위해 666부터 숫자를 세어 N번째 숫자를 확인할 것이다. 따라서 확인할 숫자 변수(num)을 666으로 지정한다.
4. 그리고 N번째 666의 경우를 셀 N_check를 0으로 설정해준다.
5. While문을 통해 N_check이 N이 될때까지 num을 1씩 더해주며 다음 666이 나오는 경우를 찾는다.
6. num의 숫자에 연속으로 666이 오는지 확인하기 위해 check_number 변수를 만들어 list(map(int, str(num))) 다음 함수를 통해 num의 현재 숫자를 문자열 리스트 형태로 변환하여 넣어준다.
7. 그리고 이 check_num의 길이를 확인한 후 for문을 통해 제일 왼쪽 열 3칸부터 오른쪽으로 한칸씩 연속으로 6이 세번 입력이 되어있는지 확인한다.
8. 만일 문자열에서 i, i+1, i+2 연속으로 6이 세번 나온다면 N_check를 1 더해준 후 for문을 종료시킨다.
9. 이 과정을 N == N_check 때까지 반복한 후 같아지면 그때의 num을 출력한 후 break로 while문을 빠져나와 프로그램을 종료시킨다.

## :black_nib: **Review**

- 반복문을 2개 사용하였지만 반복문 안에 조건문을 넣어 확인하는 방법이 있었다.

while True:
    if '666' in str(num):
        N_check += 1
- num안에 666이 있는지 확인하는 방법을 위와같이 단순화 할 수 있었다. 조건문의 조건을 if '666' in str(num): 다음과 같이 설정한다면 num 안의 문자열에 '666'이 포함되는지 확인할 수 있었다.
- 브루트 포스 문제는 모든 경우의 수를 확인하는 경우가 많으므로 시간제한이 관건이다. 따라서 풀이 시간을 줄이는 방법을 생각해봐야겠다.

