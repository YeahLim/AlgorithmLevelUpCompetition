# [백준] 두 수의 합 (3723🩶43️⃣)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

투 포인터

## ⏲️**Time Complexity**

$O(nlogn)$

## :round_pushpin: **Logic**

- 투 포인터: 두 개의 포인터가 가리키고 있는 값을 더해 x이 되는지 확인.
  1. sum == M -> start 증가, end 감소
  2. sum > M -> end 감소
  3. sum < M -> start 증가
```
	while (start < end && end < n) {
		int sum = arr[start] + arr[end];

		if (sum == x) {
			cnt++;
			start++;
			end--;
		}
		else if (sum < x) {
			start++;
		}
		else if (sum > x) {
			end--;
		}
	}
```
  

## :black_nib: **Review**

- 
