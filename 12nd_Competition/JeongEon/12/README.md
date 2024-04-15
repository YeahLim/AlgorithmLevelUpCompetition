# [SWEA] 간단한 369게임 (1926번 D2️⃣)

## ⏰  **time**

30분

## :pushpin: **Algorithm**


## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 3 6 9 게임
```cpp
	for (int j = 1; j <= N; j++) {
		string num = to_string(j);
		int cnt = 0;
		for (int k = 0; k < num.length(); k++) {
			if (num[k] == '3' || num[k] == '6' || num[k] == '9') {
				cnt++;
			}
		}
		if (cnt == 0) {
			cout << j;
		}
		else {
			for (int i = 0; i < cnt; i++) {
				cout << "-";
			}
		}
		cout << " ";
	}
```

## :black_nib: **Review**
- 3, 6, 9 중 하나만 있으면 -, 두개 있으면 --, 3개 있으면 ---
