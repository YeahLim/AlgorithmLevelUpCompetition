# [백준] 상어 초등학교 (21608)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**
구현


## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 자리 구하기
  - 우선순위에 따라 자리 선택
    ```
      1. 좋아하는 학생이 가장 많이 인접한 칸
			
		  2. 인접한 칸 중에서 가장 많이 비어있는 칸
				
      3. 행의 번호가 가장 작은 칸

			4. 열의 번호가 가장 작은 칸
    ```

- 만족도 구하기
  - 인접한 곳에 좋아하는 학생의 수가 1,2,3,4인 경우에 따라 1, 10, 100, 1000 추가

## :black_nib: **Review**
- comparable<>로 우선순위에 따라 알고리즘 푸는 구현 문제 너무 오랜만이다.. 다른 구현 문제도 더 풀어봐야겠다!
