# [SWEA - D2️⃣] 2005. 파스칼의 삼각형

## ⏰  **time**

27분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 파스칼의 삼각형: 해당 수는 좌측 위, 우측 위의 수를 더해 만들어진다.
```cpp
		for (int i = 0; i < N; i++) {
			vec[i].push_back(1);
			if (i == 0) {
				continue;
			}
			for (int j = 0; j < vec[i - 1].size() - 1; j++) {
				vec[i].push_back(vec[i - 1][j] + vec[i - 1][j + 1]);
			}
			vec[i].push_back(1);
		}
```  

## :black_nib: **Review**
- 맨처음에 출력만 해서 풀려고 꼼수썼는데, 역시.. 제대로 안 풀면 틀린다.
