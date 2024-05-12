// 코테 알고리즘 스터디 16회차
// SWEA D3
// 10200. 구독자 전쟁

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		int N, A, B;
		cin >> N >> A >> B;

		int mini;
		int maxi;
		if (A + B > N) {
			mini = (A + B) - N;
		}
		else {
			mini = 0;
		}

		if (A >= B) {
			maxi = B;
		}
		else {
			maxi = A;
		}

		cout << "#" << t << " ";
		cout << maxi << " " << mini << '\n';
	}
}