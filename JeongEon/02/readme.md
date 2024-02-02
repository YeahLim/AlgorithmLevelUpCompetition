# [백준] 칸토어 집합 (4779번)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

재귀

## ⏲️**Time Complexity**

$O(N^M)$ (M은 입력 받는 값)

## :round_pushpin: **Logic**

- cantor(char* arr, int size, int N)
``` 
	if (N >= 0) {
		int cnt = 0;
		bool erase = false;
		for (int i = 0; i < size; i++) {
			if (erase) {
				cnt++;
				arr[i] = ' ';
				if (cnt >= pow(3, N)) {
					cnt = 0;
					erase = false;
					continue;
				}
			}
			else {
				cnt++;
				if (cnt >= pow(3, N)) {
					cnt = 0;
					erase = true;
					continue;
				}
			}
		}

		N--;
		cantor(arr, size, N);
	}
```

## :black_nib: **Review**

- '굳이 재귀여야하나..? 반복문이어도 될거 같은데'라고 생각해보니 잘못 만들었네...
- 원래는 반복문 없애고 재귀로 만들어야함..
