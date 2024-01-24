# [백준] 다음 소수 (4134번)

## ⏰  **time**

30분

## :pushpin: **Algorithm**

제곱근 소수 판정

## ⏲️**Time Complexity**

$O(sqrt(N))$

## :round_pushpin: **Logic**

bool isPrime(long long n) {
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
   

## :black_nib: **Review**
- 없음
