# [백준] 꿀 아르바이트 (14465🩶3️⃣)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 슬라이딩 윈도우 + 누적합
```
	while (ptr <= n) {
		long long int sum = money[ptr] - money[ptr - m];
		if (sum > best) {
			best = sum;
		}

		ptr++;
	}
```
  

## :black_nib: **Review**

- 제발.. 범위를 꼭 보자
- 출력할 때 개행 썼다고 6번 틀렸다. 억울해!!
