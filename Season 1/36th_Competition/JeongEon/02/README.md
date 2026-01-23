# [백준 - 실버 5] 14916. 거스름돈
 
## ⏰  **time**
18분

## :pushpin: **Algorithm**
수학

## ⏲️**Time Complexity**
$O(N)$

## :round_pushpin: **Logic**
1. 5원의 최대개수부터 1개씩 줄여나가며 거스름돈이 0이 될 때 출
   ```cpp
	int coin5 = n/5;
	int money = (n - (5 * coin5)) % 2;
	while (money != 0) {
		if (coin5 <= 0) {
			cout << -1;
			return 0;
		}
		coin5 -= 1;
		money = (n - (5 * coin5)) % 2;
	}
   ```

## :black_nib: **Review**
- 수학 좋아

## 📡 Link
https://www.acmicpc.net/problem/14916
