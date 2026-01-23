# [백준] 가장 긴 증가하는 부분 수열 (11053번)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. dp 초기화
  ```
		int[] dp = new int[n];
		dp[0] = 1;
  ```

2. 점화식
  ```
    for (int i = 1; i < array.length; i++) {
			
			int min = 0;
			for (int j = 0; j < i; j++) {
				if (array[i] > array[j]) {
					min = Math.max(min,  dp[j]);
				}
			}
			
			dp[i] = min + 1;
		}
  ```
   

## :black_nib: **Review**
- 스택 문제인줄알고 한참 고민했다... 다음부터 이런 문제 나오면 dp인거 바로 알아차리기~
