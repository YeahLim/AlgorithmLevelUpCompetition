# [SWEA] [S/W 문제해결 기본] 1일차 - 최빈수 구하기 (1204번 D2️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

최빈수

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 오름차순 정렬 후 빈도수 세기
```cpp
		for (int j = 0; j < 1000; j++) {
			if (ptr == score[j]) {
				cnt++;
			}
			else {
				ptr = score[j];
				if (cnt >= maxi) {
					maxi = cnt;
					result = score[j - 1];
				}
				cnt = 1;
			}
		}
```

## :black_nib: **Review**
- 만약 최빈수가 같다면 더 큰 수 출력하는 조건 까먹어서 한번 틀렸다..!
