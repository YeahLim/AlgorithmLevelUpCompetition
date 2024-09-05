# [백준 - 실버 4 ] 온라인 판매 (1246번)

https://www.acmicpc.net/problem/1246

## ⏰ **time**

30분

## :pushpin: **Algorithm**

그리디

## :round_pushpin: **Logic**

1. 오름차순으로 정렬해준다.
2. 현재 인덱스보다 이전 인덱스의 사람은 구매를 못하고, 뒷사람은 모두 구매할 수 있다.
3. 1인당 하나만 살 수 있기 때문에 남은 사람이(전체 사람수 - 현재인덱스) 계란수를 초과하면 계란을 현재 인덱스 값 \*를 해주고, 그렇지 않으면 남은 사람 수대로 곱해준다.