# [백준] 배열 합치기 (6159🩶5️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

투 포인터

## ⏲️**Time Complexity**

$O(N log N + M log M)$

## :round_pushpin: **Logic**

- 투 포인터: 오름차순으로 정렬된 두 배열을 작은 수가 있는 배열 쪽을 계속해서 결과값에 넣어준다.
```
	while (result.size() < N + M) {
		if (a < N && b < M) {
			if (A[a] <= B[b]) {
				result.push_back(A[a]);
				a++;
			}
			else if (B[b] < A[a]) {
				result.push_back(B[b]);
				b++;
			}
		}
		else {
			while (a < N) {
				result.push_back(A[a]);
				a++;
			}

			while (b < M) {
				result.push_back(B[b]);
				b++;
			}
		}
	}
```
  

## :black_nib: **Review**

- 
