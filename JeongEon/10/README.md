# [백준] 통계학 (2108번 🩶3️⃣)

## ⏰  **time**

45분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(8000)$

## :round_pushpin: **Logic**
1. 산술평균
   ⭐ 반올림 함수 round
```cpp
double mean = round((double)sum / N);
```

2. 중앙값
   ⭐ N/2
```cpp
arr[N/2]
```

3. 최빈값: 동일한 최빈값이 있다면 두번째로 작은 수 출력
   ⭐ -4000~4000범위 이므로 1~8000 크기의 배열을 만들어 입력하는 숫자에 4000을 더해 빈도수 확인
```cpp
	for (int i = 0; i < 8001; i++) {
		if (repeat[i] == 0) {
			continue;
		}

		if (repeat[i] == most) {
			if (not_first) {
				most_val = i - 4000;
				not_first = false;
			}
		}
		if (repeat[i] > most) {
			most = repeat[i];
			most_val = i - 4000;
			not_first = true;
		}
	}
```
5. 범위
   ⭐ 배열의 앞뒤 차이
```
arr.back() - arr.front()
```

## :black_nib: **Review**
- 다 맞았는데 왜 자꾸 틀릴까 고민하니 산술평균 round할 때, double로 계산하는거랑, -0으로 출력한되게 조건 넣는 거였다.
