# [백준] 소가 길을 건너간 이유 5 (14465🩶2️⃣)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 슬라이딩 윈도우 + 누적
```
	while (ptr <= N) {
		int sum = Light[ptr] - Light[ptr - K];
		if (K - sum < less) {
			less = K - sum;
		}

		ptr++;
	}
```
  

## :black_nib: **Review**

- 
