# [백준] 요세푸스 문제 (1158번 🩶4️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

큐

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 원형 배열에서 +K번째 값을 출력 <br/>
   if) 이미 출력했다면
   ➡️ 그 다음 값을 확인
```
	while (q.size() < N) {
		if (cnt == K) {
			q.push(vec[ptr].first);
			vec[ptr].second = true;
			cnt = 0;
		}
		else {
			if (ptr + 1 < N) {
				ptr = ptr + 1;
				if (!vec[ptr].second) {
					cnt++;
				}
			}
			else {
				ptr = 0;
				if (!vec[ptr].second) {
					cnt++;
				}
			}
		}
	}
```

## :black_nib: **Review**
- 맨 처음에 K개씩 지나가면서 출력했는데, 틀렸다.
- 그저 K개씩 지나가는 것이 아닌 이미 출력한 것은 제외해야한다.
