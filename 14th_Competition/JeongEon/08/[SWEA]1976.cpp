// 알고리즘 코딩 스터디 14회차
// SWEA D2
// 1976. 시각 덧셈

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		int hour1, hour2;
		int min1, min2;
		cin >> hour1 >> min1 >> hour2 >> min2;

		int result_hour = hour1 + hour2;
		int result_min = min1 + min2;

		if (result_hour > 12) {
			result_hour -= 12;
		}

		if (result_min >= 60) {
			result_hour += 1;
			result_min -= 60;
		}

		cout << "#" << t << " ";
		cout << result_hour << " " << result_min << '\n';
	}

	return 0;
}