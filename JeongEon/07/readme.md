# [백준] 수들의 합 2 (2003🩶4️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

투 포인터

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 투 포인터: 오름차순으로 정렬된 배열에 두 포인트가 가리키고 있는 값의 합이 M인지 확인.
  1. 만약 M보다 작다 -> ptr2 증가
  2. 만약 M보다 크다 -> ptr1 증가
  3. 만약 M과 동일하다 -> ptr1 증가
```
	while (ptr2 <= N && ptr1 <= N) {
		int sum = arr[ptr2] - arr[ptr1];

		if (sum < M) {
			ptr2++;
		}
		else if (sum >= M) {
			if (sum == M) {
				cnt++;
			}
			ptr1++;
		}
	}
```
  

## :black_nib: **Review**

- 원래
  ```
    if (num1 - num2 == M) {
			cnt++;
		}

		if (num1 - num2 < M) {
			ptr2++;
		}
		else if (ptr1 + 1 < ptr2) {
			ptr1++;
		}
		else {
			ptr2++;
		}
  ```
  이렇게 조건을 짰는데, 맞긴 했다. 하지만 저 조건이 정답은 아닌 거 같았다.
- 좀 더 깔끔하게 바꿨다... 중복 조건을 없애고...
