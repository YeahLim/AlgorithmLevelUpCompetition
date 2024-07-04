# [백준 - 골드 5] 입국심사 (3079)
 
## ⏰  **time**

40분

## :pushpin: **Algorithm**

이분탐색

## ⏲️**Time Complexity**

$O(logN)$

## :round_pushpin: **Logic**
1. 최대 시간에서 최소 시간을 이분탐색하면서 
    - `start` : 0
    - `end` : 최대로 나올 수 있는 시간
2. 최소 시간 구한다
    - `mid`시간동안 각각의 입국 심사에서 검사할 수 있는 총 `count`를 구한다
        ```
        count += mid / t;
        ```
3. `count`가 총 인원 수보다 큰 경우 `start = mid - 1` / 아닌경우 `end = mid + 1`

## :black_nib: **Review**
- 이분탐색 더 풀어보자