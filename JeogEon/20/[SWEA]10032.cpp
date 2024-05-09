// 코테 알고리즘 스터디 16회차
// SWEA D3
// 10032. 과자 분배

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		int N, K;
		cin >> N >> K;

		int maxi = N / K;
		int mini = N / K;
		if (N % K != 0) {
			maxi++;
		}

		cout << "#" << t << " ";
		cout << maxi - mini << '\n';
	}
}