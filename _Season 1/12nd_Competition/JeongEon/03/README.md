# [SWEA] 새로운 불면증 치료법 (1288번 D2️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

수학

## ⏲️**Time Complexity**

$O(Nlog(N))$

## :round_pushpin: **Logic**
1. 수학 : string으로 받아 0~9까지 모든 수를 보았는지 확
```cpp
		while (all_fine()) {
			string num = to_string(N*multi);
			for (int j = 0; j < num.length(); j++) {
				if (!check[num[j] - '0']) {
					check[num[j] - '0'] = true;
				}
			}

			multi++;
		}
```

## :black_nib: **Review**
- 양을 몇 번 셌는지 출력했어야했는데, 자꾸 곱한 횟수 출력해서 틀렸다.
- 문제를 제대로 읽어야겠다.
