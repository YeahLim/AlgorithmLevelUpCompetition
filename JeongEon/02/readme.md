# [백준] CD (4158🩶5️⃣)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

투 포인터

## ⏲️**Time Complexity**

$O(N+M)$

## :round_pushpin: **Logic**

- 투 포인터: 오름차순으로 정리된 CD 번호를 작은 쪽을 더해서 올리며 비교한다.
```
		while (G < N && Y < M) {
			if (arr_G[G] < arr_Y[Y]) {
				G++;
			}
			else if (arr_Y[Y] < arr_G[G]) {
				Y++;
			}
			else if (arr_G[G] == arr_Y[Y]) {
				cnt++;
				Y++;
				G++;
			}
		}
```
  

## :black_nib: **Review**

- 로직은 맞았는데, 여러 개 입력하는 경우의 수를 몰라서 계속 틀렸다.
