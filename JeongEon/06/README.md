# [백준] 1로 만들기 (1462번 🩶3️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 점화식
   - if) 2나 3으로 나눠지면 
     ➡️ 남은 몫에 연산 + 1 값과 현재 값 중 작은 값을 저장
```
	for (int i = 2; i <= N; i++) {
		// 1. 1을 뺀다.
		DP[i] = DP[i - 1] + 1;

		// 2. 2로 나누어지면
		if (i % 2 == 0) {
			DP[i] = min(DP[i], DP[i / 2] + 1);
		}

		// 3. 3으로 나누어지면
		if (i % 3 == 0) {
			DP[i] = min(DP[i], DP[i / 3] + 1);
		}
	}
```

## :black_nib: **Review**
- 규칙 찾는게 어렵다
