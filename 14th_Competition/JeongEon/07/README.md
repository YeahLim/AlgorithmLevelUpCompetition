# [SWEA - D2️⃣] 1970. 쉬운 거스름돈
 
## ⏰  **time**

10분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 돈을 순서대로 빼면서 음수가 되면 cnt-1을 출력
```cpp
		for (int i = 0; i < 8; i++) {
			int cnt = 1;
			while (1) {
				if (N - (cnt * money[i]) < 0) {
					cnt--;
					N -= cnt * money[i];
					break;
				}
				cnt++;
			}
			cout << cnt << " ";
		}
```

## :black_nib: **Review**
- 출력 방식 잘못되서 계속 틀림!
