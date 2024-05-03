# [SWEA - D3️⃣] 19113. 식료품 가게
 
## ⏰  **time**

20분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 뒤에서부터 해당 값 * 0.75 값이 존재하는지 확인
   if) 존재한다면 ➡️ -1로 치환
```cpp
		for (int i = price.size() - 1; i >= 0; i--) {
			for (int j = price.size() - 2; j >= 0; j--) {
				if (price[j] == -1 || price[i] == -1) {
					continue;
				}

				if (price[i] * 0.75 == price[j]) {
					discount.push_back(price[i] * 0.75);
					price[j] = -1;
					break;
				}
				else if (price[i] * 0.75 > price[j]) {
					break;
				}
			}
		}
```

## :black_nib: **Review**
- -1에 도달했을 때 어떻게 처리할지 안 넣어서 틀렸다..
