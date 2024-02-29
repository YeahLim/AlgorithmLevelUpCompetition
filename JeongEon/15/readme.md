# [백준] 냅색문제 (1450💛1️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

이분탐색

## ⏲️**Time Complexity**

$ O(2^(N/2) * log(N/2))$

## :round_pushpin: **Logic**

- 이분탐색: 물건 무게 배열을 반으로 나눠 넣고 뺄지 경우의 수를 따져가며 배열 재생성
```
	if (start > end) {
		part.push_back(sum);
		return;
	}
	else {
		dfs(start + 1, end, part, sum);
		dfs(start + 1, end, part, sum + v[start]);
	}
```
  

## :black_nib: **Review**

- 허... 냅색 사실 조합으로 풀다가 개수 많아지니까 어려워서 포기했다.
- 이분탐색은 절대 생각못했다... 나중에 다시 풀어서 머리에 집어넣어야겠다.
