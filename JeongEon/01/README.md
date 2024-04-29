# [SWEA - D3️⃣] 20728. 공평한 분배 2
 
## ⏰  **time**

26분

## :pushpin: **Algorithm**

투포인터

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 오름차순으로 정렬 후, 최대값과 최소값의 사이가 K이상이면서 두 수의 차가 최소값인 경우를 탐색한다.
```cpp
		long long int result = candy[K - 1] - candy[0];
		for (int i = 0; i < N; i++) {
			for (int j = i + K - 1; j < N; j++) {
				if (candy[j] - candy[i] < result) {
					result = candy[j] - candy[i];
				}
				else {
					break;
				}
			}
		}
```

## :black_nib: **Review**
- 처음에 내림차순으로 정렬해서 확인하다가 107개만 맞고 왜 틀렸는지 몰랐다.
- 알고 보니 맨 뒷 수가 크고 나머지 수가 작은 경우가 있었다.
- 그래서 다시 오름차순으로 정렬하고 두 수의 차에 집중해서 코드를 짰다.
