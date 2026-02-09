# [백준 - 실버 1] 신입 사원

## ⏰  **time**
10분

## :pushpin: **Algorithm**
정렬

## ⏲️**Time Complexity**
$O((NlogN)^T)$

## :round_pushpin: **Logic**
- 먼저 서류 면접으로 오름차순 정렬해놓고, 얘가 서류면접보다 높은게 있는지 확인한다.
```cpp
sort(v.begin(), v.end());
		
		int tmp = 0;
		ret = 1;
		for(int i=1; i<n; i++){
			if(v[tmp].second > v[i].second){
				ret++;
				tmp = i;
			}
		}
```

## :black_nib: **Review**
- 야홍
