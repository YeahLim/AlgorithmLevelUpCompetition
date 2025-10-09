# [백준 - 실버 2] 3085. 사탕 게임

## ⏰  **time**
40분

## :pushpin: **Algorithm**
브루트포스, 구현

## ⏲️ **Time Complexity**
- $O(N^2 \cdot N)$  
  → 모든 인접한 사탕 쌍을 한 번씩 바꾼 뒤 $N \times N$ 배열을 검사  
  → 한 번 바꿀 때마다 전체 사탕판을 검사하므로 $O(N^3)$  
  → $N ≤ 50$ 이므로 충분히 가능함

## :round_pushpin: **Logic**
1. 인접한 **가로** 또는 **세로** 사탕을 하나씩 교환해본다
2. 교환된 상태에서 같은 색 사탕이 **가로 또는 세로로 최대 몇 개 연속**하는지 체크
3. 교환 전 상태로 **원상복구**
4. 이 중 **최댓값을 저장하여 출력**

```cpp
// 사탕판 검사 함수
void check() {
    for(int i = 0; i < N; i++) {
        int count = 1;
        for(int j = 0; j < N; j++) {
            if(candy[i][j] == candy[i][j + 1]) count++;
            else {
                maxCandy = max(maxCandy, count);
                count = 1;
            }
        }
    }

    for(int j = 0; j < N; j++) {
        int count = 1;
        for(int i = 0; i < N; i++) {
            if(candy[i][j] == candy[i + 1][j]) count++;
            else {
                maxCandy = max(maxCandy, count);
                count = 1;
            }
        }
    }
}
````

## :black_nib: **Review**

* 구현 문제치고 은근히 실수 유도하는 포인트가 있었다.
* `범위 벗어나지 않게` 인덱스 조건 잘 봐야 함!
* 교환 후 원상복구 하는 걸 **깜빡하면 큰일🔥**

## 📡 Link

[https://www.acmicpc.net/problem/3085](https://www.acmicpc.net/problem/3085)
