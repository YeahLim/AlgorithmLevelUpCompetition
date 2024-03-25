# [백준] LCS (9251번 💛5️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 점화식
   - if) 알파벳이 서로 다르면
     ➡️ max(dp[i-1][j], dp[i][j-1])
   - if) 알파벳이 서로 같으면
     ➡️ dp[i-1][j-1] + 1
2. 초기값 = 0
3. 증가값 = +1
```
	for (int i = 1; i <= input2.size(); i++) {
		for (int j = 1; j <= input1.size(); j++) {
			if (input1[j-1] != input2[i-1]) {	// 다른 알파벳
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}
			else if (input1[j-1] == input2[i-1]) {	// 같은 알파벳
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
		}
	}
```

## :black_nib: **Review**
- 감사합니다.. 선생님.. dp식을 세울 수 있게 되었어요(❁´◡`❁)
