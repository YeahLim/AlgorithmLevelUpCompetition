# [백준] Pair Sum (9728🩶4️⃣)

## ⏰  **time**

20분

## :pushpin: **Algorithm**

투 포인터

## ⏲️**Time Complexity**

$O(T*N)$

## :round_pushpin: **Logic**

- 투 포인터: 두 개의 포인터가 가리키고 있는 값을 더해 M이 되는지 확인.
  1. sum == M -> start 증가, end 감소
  2. sum > M -> end 감소
  3. sum < M -> start 증가
```
		while (start < end && end < N) {
			int sum = arr[start] + arr[end];
			if (sum == M) {
				cnt++;
				start++;
				end--;
			}
			else if (sum < M) {
				start++;
			}
			else if (sum > M) {
				end--;
			}
		}
```
  

## :black_nib: **Review**

- 
