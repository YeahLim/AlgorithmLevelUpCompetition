# [SWEA - D3️⃣] 장애물 경주 난이도 (6730)
 
## ⏰  **time**

10분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. max치를 계속해서 업데이트
```cpp
        for (int i = 1; i < N; i++) {
            if (vec[i] > vec[i - 1]) {
                up = vec[i] - vec[i - 1];
                if (up > maxUp) {
                    maxUp = up;
                }
            }
            else {
                down = vec[i - 1] - vec[i];
                if (down > maxDown) {
                    maxDown = down;
                }
            }
        }
```

## :black_nib: **Review**
- 
