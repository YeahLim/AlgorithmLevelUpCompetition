# [SWEA D3️⃣] 7532. 세영이의 SEM력 연도
 
## ⏰  **time**

30분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(1)$

## :round_pushpin: **Logic**
1. S 365를 기준으로 1년을 계속해서 더해가며 모든 수의 나머지가 0일때 결과를 출력한다.
```cpp
		while (1) {
			if ((year - S) % 365 == 0 && (year - E) % 24 == 0 && (year - M) % 29 == 0) {
				break;
			}

			year += 365;
		}
```

## :black_nib: **Review**
- 아.. 처음에 너무 어렵게 생각해서 오래 걸렸다.
