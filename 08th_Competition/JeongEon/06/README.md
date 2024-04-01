# [백준] 색종이 만들기 (2630번 🩶2️⃣)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

분할정복, 재귀

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

#### 풀이순서
```
1. 종이를 4칸으로 나누어 같은 색이 있는지 확인한다.
2. 만약 같은 색이 존재하면, 해당 종이 길이의 반 만큼 작은 종이에서도 확인한다.
3. 더이상 잘라가면 확인할 수 없을 때, 같은 색상의 개수를 올린다.
```

- 분할정복: 가장 작은 것으로 나누어 확인 <br/>
 ⭐ 종이를 정사각형 모양으로 4등분한다.(왼위, 오위, 왼아래, 오아래) <br/>
```cpp
void cut_paper(int y, int x, int k) {
	bool cut = false; // 잘라야하는지 
	int first_color = paper[y][x]; // 첫번째칸의 색

	for (int i = y; i < y + k; i++) {
		for (int j = x; j < x + k; j++) {
			if (paper[i][j] != first_color) {
				cut = true;
				break;
			}
		}
	}

	if (cut) { // 잘라야하는 색종이면 
		cut_paper(y, x, k / 2);					// 위쪽에 왼쪽 파트
		cut_paper(y, x + k / 2, k / 2);			//위쪽에 오른쪽 파트
		cut_paper(y + k / 2, x, k / 2);			// 아래쪽에 왼쪽 파트
		cut_paper(y + k / 2, x + k / 2, k / 2); // 아래쪽에 오른쪽 파트
	}
	else {
		if (first_color == 1) // 파란색
			blue++;
		else // 흰색
			white++;
	}
}
```

## :black_nib: **Review**

- 분할정복은 해결 할 수 있도록 가장 작은 사이즈로 자른 뒤, 복귀하는 것이다.
