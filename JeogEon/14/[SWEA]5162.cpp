// 코테 알고리즘 스터디 16회차
// SWEA D3
// 5162. 두가지 빵의 딜레마

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
		int A, B, C;
		cin >> A >> B >> C;

		int result;
		if (A >= B) {
			result = C / B;
		}
		else {
			result = C / A;
		}

		cout << "#" << t << " ";
		cout << result << '\n';
	}
}