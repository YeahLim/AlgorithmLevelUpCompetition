# [백준] 곱셈 (1629번 🩶1️⃣)

## ⏰  **time**

50분

## :pushpin: **Algorithm**

분할정복, 수학

## ⏲️**Time Complexity**

$O(B)$

## :round_pushpin: **Logic**

#### 풀이순서
```
지수법칙 : a^(n+m) = a^n * a^m

모듈러 성질 : (a*b)%c = (a%c * b%c)%c
```

- 분할정복: 모듈러 성질을 이용해 분할정 <br/>
```cpp
long long int multi(long long int B) {
	if (B == 0) {
		return 1;
	}
	else if (B == 1) {
		return A % C;
	}

	long long int K = multi(B / 2) % C;
	if (B % 2 == 0) {
		return K * K % C;
	}
	else {
		return (K * K % C) * (A % C);
	}
}
```

## :black_nib: **Review**

- 모듈러 몰라서 한참 헤맸다...
