# [백준] 주유소 (13305번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

그리디 알고리즘

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 그리디 알고리즘: 최소 가격을 비교하고, 다다음 도시까지의 거리만큼 기름을 더 넣어서 출발할지 아님 이번 거리만 넣을지 판단한다.
```
  	for (int i = 0; i < N - 1; i++) {
  		if (price[i] < min_price) {
  			min_price = price[i];
  		}
  		result += (long long int)km[i] * (long long int)min_price;
  	}
```

## :black_nib: **Review**

- 55점만 나와서.. 다른 포문 한번에 만드는 걸 찾았다..
