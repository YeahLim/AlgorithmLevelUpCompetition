# [백준] N과 M (12) (15666)

## ⏰  **time**
40분

## :pushpin: **Algorithm**

DFS

## ⏲️**Time Complexity**

$O(N^M)$

## :round_pushpin: **Logic**
- `before`변수를 이용해 같은 depth에서 똑같은 숫자가 들어가지 않도록 했다.
    ```java
    int before = 0;
		for (int i = index; i < N; i++) {
			// 중복 피하기
			if (before == nums[i]) {
				continue;
			}
			
			before = nums[i];
			array[depth] = nums[i];
			searchArray(depth+1, i, array);
		}
    ```

## :black_nib: **Review**
- 중복피하는 방법을 여러가지 시도하다가 오래걸렸다.
- set이 아닌 `before`변수로 중복 제거하는 방법 명심.
