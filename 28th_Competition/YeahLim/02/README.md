# [백준 - 골드 4] 공유기 설치 (2110)
 
## ⏰  **time**
1시간 이상

## :pushpin: **Algorithm**
이분탐색

## ⏲️**Time Complexity**
$O(logN)$

## :round_pushpin: **Logic**
- 이분탐색의 기준을 `거리`로 삼았다.
- `start`는 `최소 거리`, `end`는 `첫번째 집에서 마지막 집까지의 거리`로 초기화해줬다.
- 모든 공유기가 설치가 가능하면 `start = mid + 1`, 아니라면 `end = mid - 1`로 설정해 이분탐색을 진행했다.

## :black_nib: **Review**
- 이분탐색에서 `무엇을 기준으로 탐색할지`, `start`, `end`설정이 중요한 것 같다.
- 헷갈려서 모든 집에 공유기를 설치하지 않아도 되는데 break문을 설정해서 틀렸었다. 이런 부분은 앞으로도 계속 주의가 필요하다.