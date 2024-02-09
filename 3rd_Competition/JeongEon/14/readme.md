# [백준] 스도쿠 (2580번)

## ⏰  **time**

4시간

## :pushpin: **Algorithm**

벡트레킹

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

- 스도쿠 성질 : 같은 열, 같은 행, 같은 박스 내에 동일한 숫자가 존재하면 안된다.
- bool check(int col, int row, int num)
```
    	for (int i = 0; i < 9; i++) {
    		if (arr[col][i] == num) {	// 같은 행에 num이 존재하는 지 확인
    			return false;
    		}
    		if (arr[i][row] == num) {	// 같은 열에 num이 존재하는 지 확인
    			return false;
    		}
    	}
    
    	// 같은 박스 내에 num이 존재하는 지 확인
    	int box_x = (col / 3) * 3;
    	int box_y = (row / 3) * 3;
    	for (int i = box_x; i < box_x + 3; i++) {
    		for (int j = box_y; j < box_y + 3; j++) {
    			if (arr[i][j] == num) {
    				return false;
    			}
    		}
    	}
    
    	return true;
```

## :black_nib: **Review**

- 골드 너무 어렵다.. 한 문제에 이렇게 오래 걸리는 게 맞나..
- bool out 변수 처리하는데 오래 걸렸다...
