# [백준] 가장 긴 바이토닉 부분 수열 (11054번 💛2️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

DP

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 자신보다 작은 아이가 있다면 해당 dp의 수에 +1을 한 것과 현재 dp의 수를 비교하여 더 큰 값을 저장<br/>
   출력할 때는 두 dp값을 더했을 때 가장 큰 값에서 -1해 출력(이유: 중간값 중복)<br/>
   ⭐for문을 돌 때, 맨 처음부터와 맨 뒤부터 2번 돈다.<br/>
```
	for (int i = N - 1; i >= 0; i--) {
		for (int j = N - 1; j > i; j--) {
			if (A[i] > A[j]) {
				fall[i] = max(fall [j] + 1, fall[i]);
			}
		}
	}
```

## :black_nib: **Review**
- 이전 문제랑 동일하다.
