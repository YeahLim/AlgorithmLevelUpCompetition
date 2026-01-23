# [백준] 마법사 상어와 파이어볼 (20056)

## ⏰  **time**

1시간 38분

## :pushpin: **Algorithm**
구현

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
- `이차원 배열`로 구현할지, `클래스의 리스트`로 구현할지 고민하다가 `클래스의 이차원 리스트`로 구현하였다.
    ```
        List<Fireball>[][] map
    ```
- 새로운 방향을 구할때는 항상 양수로 만드는 방법을 기억할 것
    1. `newRow = (fireball.row + dx[fireball.direction] * (fireball.speed % N) + N) % N;`
    2. `newRow = (fireball.row + dx[fireball.direction] * fireball.speed + (fireball.speed * N)) % N;`

## :black_nib: **Review**
- `direction`을 구하는 부분에서 사소한 실수했다. 수학적 계산하는 부분에서는 더 주의깊게 확인해야한다.