# [백준] 수들의 합 5 (2018번🩶5️⃣)

## ⏰  **time**

40분

## :pushpin: **Algorithm**

투 포인터

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 투 포인터: start와 end를 1부터 시작해서 움직이며 더하고 빼며 N이 되는지 확인한다.
```
	while (start <= end && end <= N) {
		if (sum < N) {
			sum += end;
			end++;
		}
		else {
			if (sum == N) {
				cnt++;
			}
			sum -= start;
			start++;
		}
	}
```
  

## :black_nib: **Review**

- 처음엔 start를 기준으로 1씩 더해가며 cnt를 출력하려고 했지만, 메모리 초과였다.
