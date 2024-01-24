# [백준] 소수 구하기 (1929번)

## ⏰  **time**

14분

## :pushpin: **Algorithm**

에라토스테네스의 체

## ⏲️**Time Complexity**

$O(Nlog(logN))$

## :round_pushpin: **Logic**
<br/>
void isPrime(long long M, long long N) {

	bool* isPrime = new bool[N + 1];
 
	for (long long i = 0; i <= N; i++) {
		isPrime[i] = true;
	}

	for (long long i = 2; i <= N; i++) {
		if (isPrime[i]) {
			if (i >= M) {
				cout << i << '\n';
			}
			for (long long j = i * 2; j <= N; j += i) {
				isPrime[j] = false;
			}
		}
	} 
 
}
<br/>

## :black_nib: **Review**
- 없음
