# [백준 - 실버 3] 단어 뒤집기 2 (17413번)

https://www.acmicpc.net/problem/17413

## ⏰ **time**

20분

## :pushpin: **Algorithm**

문자열

## ⏲️**Time Complexity**

$O(n)$

## :round_pushpin: **Logic**

1. <가 나오면 먼저 지금까지의 tmp를 rlt에 추가해주고, 초기화 시킨 다음 닫을때까진 공백이 들어와도 rlt에 추가하지 않는다.
2. > 가 나오면 태그를 rlt에 추가한다.
3. 태그가 아닌 글자면 공백이 나올때마다 rlt에 뒤집어서 추가해준다.
4. 마지막으로 tmp를 뒤집어서 넣어준다.

## :black_nib: **Review**

- 엄청쉬울줄 알았는데 생각보다 어려웠다 ㅋㅋ
