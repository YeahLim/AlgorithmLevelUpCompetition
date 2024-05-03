# [SWEA] 중간 평균값 구하기 (1984번 D2️⃣)

## ⏰  **time**

16분

## :pushpin: **Algorithm**

정렬

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 오름차순으로 정렬 후 1~8위치의 값 평균
```cpp
		sort(vec.begin(), vec.end());

		int sum = 0;
		for (int i = 1; i < 9; i++) {
			sum += vec[i];
		}

		int avg = floor((double)sum / 8 + 0.5);
```

## :black_nib: **Review**
- 반올림..!
