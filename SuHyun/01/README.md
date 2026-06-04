# [프로그래머스 - level 2] 전화번호 목록

## ⏰  **time**
10분

## :pushpin: **Algorithm**
해쉬

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 접두어가 있는지 확인하면 되므로 가장 긴것부터 정렬하여 판단
- 그리고 모든 번호의 접두어가 되는 경우의 수를 모두 set에 넣는다
- 그 후 전화번호가 set에 있는지 파악하면 O(1)의 시간복잡도로 문자열을 비교할 수 있으므로 제한시간내에 끝낼 수 있다

## :black_nib: **Review**
- 파이썬에서는 set()으로 셋을 만든다
