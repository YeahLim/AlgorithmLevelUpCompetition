# [백준] 평범한 배낭 (12865번 💛5️⃣)

## ⏰  **time**

3시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 점화식
   - if) 담을 수 있는 경우
     ➡️ max( DP[i - 1][k - W[i]]   +   V[i]  ,  DP[i-1][k] ) 
   - if) 담을 수 없는 경우
     ➡️ DP[i-1][k]   
2. 초기값 = 0
3. 증가값 = V
```
    for (int limit = 1; limit <= K; limit++) {
        for (int row = 1; row <= N; row++) {
            //1. 담을 수 없을 경우
            if (W[row] > limit) {
                DP[row][limit] = DP[row - 1][limit];
            }
            //2. 담을 수 있는 경우
            else {
                DP[row][limit] = max(DP[row - 1][limit - W[row]] + V[row], DP[row - 1][limit]);
            }
        }
    }
```

## :black_nib: **Review**
- 으 dp 테이블 만드는 거 어렵다
