# [백준 - 실버 3] 9095. 1, 2, 3 더하기

## ⏰  **time**
5분

## :pushpin: **Algorithm**
백트레킹

## ⏲️**Time Complexity**
$O(N^2)$

## :round_pushpin: **Logic**
1. arr 배열에 1, 2, 3을 넣고 백트레킹을 통해 합을 구한다.
2. 합이 n이면 cnt을 +1하고 return 한다.
3. 합이 n보다 크면 return 한다.
```cpp
void backTracking(int n, int sum) {
	if (sum >= n) {
		if (sum == n) {
			cnt++;
		}
		return;
	}

	for (int i = 0; i < 3; i++) {
		sum += arr[i];
		backTracking(n, sum);
		sum -= arr[i];
	}
}
```

## :black_nib: **Review**


## 📡 Link
https://www.acmicpc.net/problem/9095
