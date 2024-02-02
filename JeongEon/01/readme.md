# [백준] 알고리즘 수업 - 병합 정렬 1 (24060번)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

정렬, 재귀

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

- Merge_Sort(int* arr, int p, int r)
'''  
	  if (p < r) {
		  i nt q = (int)floor((p + r) / 2);

		  Merge_Sort(arr, p, q);
		  Merge_Sort(arr, q + 1, r);
		  Merge(arr, p, q, r);
	  }
'''

## :black_nib: **Review**

- 병합정렬.. 다 까먹어버렸다..
