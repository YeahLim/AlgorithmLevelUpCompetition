# [프로그래머스 - level 2] 멀리 뛰기

## ⏰  **time**
10분

## :pushpin: **Algorithm**
DP

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
- 3번칸 가는 횟수 = 2번칸 가는 횟수 + 1번칸 가는 횟수
  - count[n] = count[n-2] + count[n-1]
- 2번칸 가는 횟수는 2번, 1번칸 가는 횟수는 1번이다

## :black_nib: **Review**
- bottom top이 시간 복잡도상 유리
- 초기 값이 파라미터로 들어올 수 있으므로 유의
  - 헷갈리면 그냥 리스트를 최대 크기로 만들면 됨