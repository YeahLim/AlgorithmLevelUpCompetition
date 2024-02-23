# [백준] 소수의 연속합 (1644번)

## ⏰  **time**

2시간

## :pushpin: **Algorithm**

투 포인터, 에라테스테네스의 체

## ⏲️**Time Complexity**

$O(N)$

## :round_pushpin: **Logic**

- 투포인터 : 두 개의 포인터를 이용하여 연속된 소수를 더하고, 합을 만들 수 있는지 확인
- 에라테스테네스의 체 : 소수 판별
```
	while (1) {
		if (sum > n) {
			sum -= prime[s];
			s++;
		}
		else if (sum < n) {
			if (e >= prime.size()) break;
			sum += prime[e];
			e++;
		}
		else {
			ans++;
			if (e >= prime.size()) break;
			sum += prime[e];
			e++;
		}
	}
```


## :black_nib: **Review**

- 에라테스테네스 까먹었다! 으악 다시 공부햇!
- 투포인터 증감하는 위치 정하는게 어려웠다...
