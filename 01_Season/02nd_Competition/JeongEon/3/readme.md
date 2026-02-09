# [백준] 골드바흐 파티션 (17103번)

## ⏰  **time**

45분

## :pushpin: **Algorithm**

에라토스테네스의 체

## ⏲️**Time Complexity**

$O(Nlog(logN))$

## :round_pushpin: **Logic**
<br/>

void isPrime(long long N) {

	bool* Prime = new bool[N + 1];

	for (long long i = 0; i <= N; i++) {
		Prime[i] = true;
	}

	for (long long i = 2; i <= N; i++) {
		if (Prime[i]) {
			for (long long j = i * 2; j <= N; j += i) {
				Prime[j] = false;
			}
		}
	}

	cout << GoldBachPartition(Prime, N) << '\n';
 
}

<br/>
   

## :black_nib: **Review**
- 골드 바흐 파티션 출력할때 이중for문으로 했다가 시간초과 났다.. 반복문 많이 사용하는 습관 언제 버리지..
