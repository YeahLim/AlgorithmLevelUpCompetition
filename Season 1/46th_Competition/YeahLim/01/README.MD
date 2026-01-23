# [프로그래머스 - 레벨 2] 구명보트
 
## ⏰  **time**
20분

## :pushpin: **Algorithm**
그리디

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 오름차순 정렬 후
- 가장 가벼운 것과 가장 무거운 것의 합이 `limit`보다 클 경우 : 무거운 것의 index를 내려주고, `answer++`
- 아닌 경우 : 가벼운 것의 index 올려주고, 무거운 것의 index 내려주고, `answer++`

## :black_nib: **Review**
- 2명씩만 탈 수 있는걸 착각해서 오래걸렸다