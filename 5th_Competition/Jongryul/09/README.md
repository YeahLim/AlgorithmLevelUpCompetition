# [백준 - 골드3] 최소비용 구하기 2 (11779번)

## ⏰ **time**

2시간

## :pushpin: **Algorithm**

다익스트라

## :round_pushpin: **Logic**

1. 평범한 다익스트라인데, q에 이동경로를 전부 넣는 로직으로 짜니까 메모리초과가 났다. 그걸 바꿔서 parent라는 배열로 처리해주었다.

## :black_nib: **Review**

- 출력조건에 다른 동일한 비용에 다른 경로일 경우도 가능하다고 적어줬으면 훨씬 덜걸렸을것 같다..................헛발질 너무했다.