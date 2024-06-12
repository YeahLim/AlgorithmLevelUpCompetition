// 알고리즘 스터디 21회차
// 백준 실버 4
// 2960 에라토스테네스의 체

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	vector<int> vec;
	bool num[1001];
	for (int i = 1; i <= N; i++) {
		num[i] = true;
	}

	for (int i = 2; i <= N; i++) {
		if (num[i]) {
			for (int j = i; j <= N; j += i) {
				if (num[j]) {
					num[j] = false;
					vec.push_back(j);
				}
			}
		}
	}

	cout << vec[K - 1] << '\n';

	return 0;
}