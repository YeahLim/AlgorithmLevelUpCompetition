# [백준] Buy One Get One Free (6230🩶4️⃣)

## ⏰  **time**

15분

## :pushpin: **Algorithm**

투 포인터

## ⏲️**Time Complexity**

$O(N+M)$

## :round_pushpin: **Logic**

- 투 포인터: 오름차순으로 정렬된 배열에 두 포인트가 가리키고 있는 값의 크기 비교.
  1. arr[ptr2] < arr[ptr1] -> ptr2 감소, ptr1 감소
  2. arr[ptr1] <= arr[ptr2] -> ptr2 감소
```
	while (ptr1 >= 0 && ptr2 >= 0) {
		if (high[ptr1] > low[ptr2]) {
			cnt++;
			ptr1--;
			ptr2--;
		}
		else {
			ptr2--;
		}
	}
```
  

## :black_nib: **Review**

- 
