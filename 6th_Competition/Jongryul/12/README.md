# [백준 - 골드 4] 서강그라운드 (14938번)

## ⏰ **time**

1시간

## :pushpin: **Algorithm**

다익스트라

## :round_pushpin: **Logic**

1. 양방향이기 때문에 입력받을때 양쪽으로 모두 추가해준다.
2. 최단거리부터 돌면서 cnt를 아이템 개수만큼 더해준다.
3. 이미 갔던곳은 아이템을 또 습득하면 안되기 때문에 v로 예외처리 해준다.

## :black_nib: **Review**

- 쉬운문제인데 입력받을때 (a-1, c)가 아니라 (a-1, r)로 받았는데도 정답이 제대로 나와서 찾는데 조금 헤맸다....
