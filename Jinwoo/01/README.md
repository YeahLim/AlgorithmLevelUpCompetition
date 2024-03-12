# [백준 - 실버 4] 균형잡힌 세상 (4949 번)

## ⏰  **time**

1시간 이상

## :pushpin: **Algorithm**

자료 구조
문자열
스택

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 스택을 활용하여 문자열중 괄호만 판독하여 stack 리스트에 넣고 올바른 괄호값이 들어올 경우 스택 리스트에서 제거해 최종적으로 stack 리스트에 값이 없으면 올바른 괄호 입력이므로 yes를 아닐 경우 no를 출력하게 하여 문제풀이를 진행하였다.

## :black_nib: **Review**

- 이번 문제풀이는 처음에 괄호의 정보를 세어주는 count 값을 소괄호, 대괄호 별로 선언하여 풀이를 진행했었다.
- '('와 '['는 count에 +1이 되도록, 그리고 ')'와 ']'가 들어올 경우 -1이 되도록 하여 최종적으로 count 값이 0이 된다면 올바른 입력이라 판단하여 풀이를 진행하였다.

## 첫번째 문제풀이 오류

```
import sys

stack = []                                                                                          # 스택 리스트
Big_count = 0                                                                                       # 대괄호 카운트
small_count = 0                                                                                     # 소괄호 카운트


while True:
    STR_list = input()
#    print(STR_list)

    if STR_list == '.':
        break

    else:

        for i in STR_list:

            if i == '(':
                small_count += 1

            elif i == ')':
                small_count -= 1

            elif i == '[':
                Big_count += 1

            elif i == ']':
                Big_count -= 1


            if Big_count < 0 or small_count < 0 :                                                           # 대괄호 소괄호 카운트 값이 -1일 경우 반복문 빠져나오기. 괄호를 덮을 수 없기 때문.
                print("no")                                                                                 # 따라서 no를 출력한 후
                print(STR_list)
                break                                                                                       # 반복문을 빠져나온다.

            if i == '.':                                                                                    # '.'가 찍히면 문자열이 끝났다는 뜻이므로 반복문을 빠져나온다.
                break

        if Big_count == 0 and small_count == 0 and STR_list[len(STR_list)-1] == '.':
            print("yes")
            print(STR_list)

    #    print(STR_list)
        Big_count = 0
        small_count = 0`

```

- 위와같이 문제풀이를 진행하였으나 오답이 나왔다.
- 생각하지 못한 점은 ([)] 이와 같이 입력이 될 경우 소괄호와 대괄호가 곂쳐 count로 수를 세는 방식으론 이 문제를 해결하지 못했다.
- 따라서 스택 리스트를 사용하여 문제풀이를 진행하였다.
- 괄호의 올바른 입력은 무조건 '(', '[' 다음엔 ')', ']'이 들어와야 하므로 스택을 이용하여 전의 입력값과 현재 입력값을 비교하는 방식으로 풀이하는 것이 훨씬 수월하다는 것을 알게 되었다.
- 따라서 스택 알고리즘은 가장 최근의 값과 현재값을 비교할 때 좋은 알고리즘 이라는 것을 알게 되었다.