# [SWEA D3️⃣] 8658. Summation
 
## ⏰  **time**

5분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**
1. 각 자리수를 더한 값을 result에 넣고 내림차순으로 정렬하여 front와 end를 출력한다.
```cpp
		vector<int> result;
		for (int i = 0; i < 10; i++) {
			int sum = 0;
			for (int j = 0; j < vec[i].length(); j++) {
				sum += vec[i][j] - '0';
			}
			result.push_back(sum);
		}
```

## :black_nib: **Review**
- 
