// 백준 알고리즘 스터디 5회차
// 문제 번호: 1644번
// 문제 이름: 소수의 연속합
// 알고리즘: 투 포인터
// 작성일: 24.02.23

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<bool> v(n + 1, 1);

	for (int i = 2; i * i <= n; i++) {
		if (v[i] == 0) continue;
		for (int j = i + i; j <= n; j += i) {
			v[j] = 0;
		}
	}
	vector<int> prime;

	for (int i = 2; i <= n; i++) {
		if (v[i]) prime.push_back(i);
	}
	int s = 0, e = 0;
	int sum = 0;
	int ans = 0;
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
	cout << ans;
	return 0;
}
