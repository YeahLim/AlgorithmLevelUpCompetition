# [백준 - 골드 5] LCS (9251)
 
## ⏰  **time**
30분

## :pushpin: **Algorithm**
DP

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
- (0,0)의 DP 테이블을 만들기 위해, 문자열 길이 +1 크기의 DP 변수를 만들었다.
    ```JAVA
    int[][] dp = new int[first.length()+1][second.length()+1];
    ```
- 그러나 문자열은 0부터 시작하기 때문에, 점화식은 `dp[i][j]`가 기준이 아니라 `dp[i+1][j+1]`이 기준이다.
    ```JAVA
    for (int i = 0; i < first.length(); i++) {
        for (int j = 0; j < second.length(); j++) {
            
            if (first.charAt(i) == second.charAt(j)) {
                dp[i+1][j+1] = dp[i][j] + 1;
            }
            else {
                dp[i+1][j+1] = Math.max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }                       
    ```

## :black_nib: **Review**
- LCS를 이제야 풀다니..
- 풀이보고 혼자 풀어봤다.