# [백준] 블로그 (21921🩶3️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 슬라이딩 윈도우: X크기 만큼씩 이동하며 최대값 확인
- 해당 문제는 처음만 X크기만큼 확인하고, 다음 확인할 때는, 맨 앞을 빼주고, 다음 값을 더해주면 된다.
```
while (ptr <= N) {
	int sum = visitor[ptr] - visitor[ptr - X];
	if (sum > best.top().first) {
		best.push({ sum, 1 });
	}
	else if (sum == best.top().first) {
		best.top().second++;
	}

	ptr++;
}
```
  

## :black_nib: **Review**

- 
