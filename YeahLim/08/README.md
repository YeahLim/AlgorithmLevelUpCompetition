# [백준] 나무 자르기 (2805번)

## ⏰  **time**
35분

## :pushpin: **Algorithm**

이분 탐색

## ⏲️**Time Complexity**

$O(NlogN)$

## :round_pushpin: **Logic**
- max, min의 값을 변경하는 게 포인트!
  ```
  while (min <= max) {
			
			int mid = (min + max) / 2;
			...

			// 더 적은 양의 나무가 필요할 떄
			if (total >= M) {
				min = mid + 1;
			}
			
			// 더 많은 양의 나무가 필요할 때
			else {
				max = mid - 1;
			}
		}
```

## :black_nib: **Review**
- 이분탐색 거의 푼 적 없는데 풀어봤다..! 투포인터랑 비슷한 느낌
- 선형탐색 문제는 항상 long타입인지 주의해야한다..! 문제 꼼꼼히 읽자!
