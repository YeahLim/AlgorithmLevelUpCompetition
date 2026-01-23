# [SWEA - D3️⃣] 정곤이의 단조 증가하는 수 (6190)
 
## ⏰  **time**

30분

## :pushpin: **Algorithm**

비교

## ⏲️**Time Complexity**

$O(N^2 log N)$

## :round_pushpin: **Logic**
1. 단조: 주어진 수의 자릿수마다의 수가 모두 오름차순인가
```cpp
bool Danjo(int x) {
	string input = to_string(x);
	for (int i = 0; i < input.length() - 1; i++) {
		if (input[i] > input[i + 1]) {
			return false;
		}
	}

	return true;
}
```

## :black_nib: **Review**
- 맨처음엔 무슨 소리인줄 몰랐으나, 두 수를 곱한 결과값이 단조인지 묻는 문제였다.
