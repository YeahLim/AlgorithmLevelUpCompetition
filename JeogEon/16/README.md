# [SWEA D3️⃣] 5515. 2016년 요일 맞추기
 
## ⏰  **time**

16분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. month 배열에 각 달마다 며칠까지 있는지 저장
2. date에 현재 날짜와 m달 전까지 모든 달을 더한다.
3. 2016년의 1월 7일은 목요일이다. date%7을 통해 나온 값이 0 <= 값 <= 3이면 목 금 토 일 이므로 3을 더한다.
4. 만약 그 외라면 월 화 수 이므로 4를 뺀다.
```cpp
		int date = d;
		for (int i = 0; i < m; i++) {
			date += month[i];
		}

		int result = 0;
		if (date % 7 <= 3 && date % 7 >= 0) {
			result = date % 7 + 3;
		}
		else {
			result = date % 7 - 4;
		}
```

## :black_nib: **Review**
- 
