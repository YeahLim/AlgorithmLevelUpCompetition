# [백준] 회의실 배정 (1931번)

## ⏰  **time**

1시간

## :pushpin: **Algorithm**

그리디 알고리즘, 정렬

## ⏲️**Time Complexity**

$O(N^2)$

## :round_pushpin: **Logic**

- 회의 끝나는 시간과 회의 시작하는 시간을 비교
```
    	int time = vec[0].second;	//	회의 끝나는 시간을 저장
    	int cnt = 1;	// 회의의 개수
    	for (int i = 1; i < N; i++) {
    		if (vec[i].first >= time) {
    			time = vec[i].second;
    			cnt++;
    		}
    	}
```

## :black_nib: **Review**

- STL::sort() 사용법 까먹어서 다시 공부함
