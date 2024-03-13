# [백준] 괄호 (9012번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

자료구조

## ⏲️**Time Complexity**
T의 범위가 문제에 제시 x
$O( T*N )$

## :round_pushpin: **Logic**

- check리스트 길이로 판별
'''
for i in parenthesis:
        #시작
        if len(check) == 0:
            if i != '(':
                check.append(')')
                break
            check.append(i)
            
        #진행중
        elif i == ')':
            check.pop()
        else:
            check.append('(')
'''
## :black_nib: **Review**
- 아 문제를 끝까지 안읽어서 )( 도 맞다는 식으로 해버렸다..
- 그리고 심지어 T의 범위가 안나와있어서 N^2 알고리즘 같은데 시간초과가 날까봐 두려웠지만 전혀 그러지 않았다.
