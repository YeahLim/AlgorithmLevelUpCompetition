# [백준] 올바른 배열 (1337🩶4️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

투 포인터

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

- 투 포인터: 오름차순으로 정렬된 배열에 포인트가 가리키고 있는 값의 차가 5미만인지 확
```
	for (int i = 0; i < N; i++) {
		int cnt = 1;
		for (int j = i + 1; j < N; j++) {
			if (arr[j] - arr[i] < 5 && arr[j] - arr[i] > 0) {
				cnt++;
			}
		}
		best = max(best, cnt);
	}
```
  

## :black_nib: **Review**

- 아 차를 생각 못해서 엄청 어려웠다.
