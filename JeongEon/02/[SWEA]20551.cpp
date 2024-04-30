// 코테 스터디 15회차
// SWEA D3
// 20551. 증가하는 사탕 수열

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		int A, B, C;
		cin >> A >> B >> C;
		cout << "#" << t << " ";

		int result = 0;
		if (B >= C) {
			result += B - C + 1;
			B -= B - C + 1;
		}

		if (A >= B) {
			result += A - B + 1;
			A -= A - B + 1;
		}

		if (A <= 0 || B <= 1 || C <= 2) {
			result = -1;
		}

		cout << result << '\n';
	}

	return 0;
}
