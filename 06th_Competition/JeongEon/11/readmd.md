# [백준] DNA 비밀번호 (12891🩶2️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

슬라이딩 윈도우

## ⏲️**Time Complexity**

$O(S*P)$

## :round_pushpin: **Logic**

- 슬라이딩 윈도우: P크기만큼 이동하며 확인
- 해당 문제는 처음만 P크기만큼 확인하고, 다음 확인할 때는, 맨 앞을 빼주고, 다음 값을 더해주면 된다.
```
	while (1) {
		if (DNA['A'] >= A && DNA['C'] >= C && DNA['G'] >= G && DNA['T'] >= T) {
			cnt++;
		}

		if (ptr + 1 + P <= S) {
			DNA.find(input[ptr])->second--;
			ptr++;
			DNA.find(input[ptr + P - 1])->second++;
		}
		else {
			break;
		}
	}
```
  

## :black_nib: **Review**

- 슬라이딩 윈도우는 하나씩 확인하면 시간초과가 나는구나
