# [백준] 소수 구하기 (1929번)

## ⏰  **time**

14분

## :pushpin: **Algorithm**

에라토스테네스의 체

## ⏲️**Time Complexity**

$O(Nlog(logN))$

## :round_pushpin: **Logic**
<br/>
void isPrime(long long M, long long N) { <br/>
	bool* isPrime = new bool[N + 1]; <br/>
	for (long long i = 0; i <= N; i++) { <br/>
		isPrime[i] = true; <br/>
	} <br/>


	for (long long i = 2; i <= N; i++) { <br/>
		if (isPrime[i]) { <br/>
			if (i >= M) { <br/>
				cout << i << '\n'; <br/>
			} <br/>
			for (long long j = i * 2; j <= N; j += i) { <br/>
				isPrime[j] = false; <br/>
			} <br/>
		} <br/>
	} <br/>
} <br/>
<br/>

## :black_nib: **Review**
- 없음
