# [백준] Costume Party (6159🩶5️⃣)

## ⏰  **time**

35분

## :pushpin: **Algorithm**

투 포인터

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 투 포인터: 오름차순으로 정렬된 소들의 크기를 두마리씩 비
```
	while (cow1 < N && cow2 < N) {
		if (cow[cow1] + cow[cow2] <= S) {
			cnt++;
		}

		if (cow2 < N - 1) {
			cow2++;
		}
		else if (cow1 < N) {
			cow1++;
			cow2 = cow1 + 1;
		}
	}
```
  

## :black_nib: **Review**

- 
