# [SWEA - D3️⃣] 17937. 큰 수의 최대공약수
 
## ⏰  **time**

34분

## :pushpin: **Algorithm**

구현

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**
1. 최대공약수(GCD)인 것 같으나 A~B사이의 모든 수의 최대공약수이므로 1 혹은 A이다.
   여기서 중요한건 unsigned long long int로도 받을 수 없는 수가 들어온다.
   자료형을 string으로 처리해야한다.
```cpp
		if (A == B) {
			cout << A << '\n';
		}
		else {
			cout << 1 << '\n';
		}
```

## :black_nib: **Review**
- 제일 큰 자료형이 unsigned long long int인데, 이거로도 받을 수 없는 수라서 시간을 소비했다.
- 어차피 수학 계산도 안하는 문제라서 string으로 받는 생각하는게 오래걸렸다.
