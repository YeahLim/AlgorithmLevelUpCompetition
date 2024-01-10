# [백준] 용액 (2467번)

## ⏰  **time**
40분

## :pushpin: **Algorithm**
투 포인터

## ⏲️**Time Complexity**
$O(NlogN)$

## :round_pushpin: **Logic**
- 처음에는 양수일떄 `left++`하고, 음수일떄 `right--`를 했다.
- 오름차순이고, 양수와 음수의 개수가 똑같지 않기 때문에 0에 가까우려면 아래 코드처럼 해야한다
  ```
  // 양수일때 right--
			if (sum > 0) {
				right--;
			}
			
  // 음수일때 left++;
  else {
    left++;
  }
  ```

## :black_nib: **Review**
- 투 포인터를 풀때 증감에서 유의해야겠다
