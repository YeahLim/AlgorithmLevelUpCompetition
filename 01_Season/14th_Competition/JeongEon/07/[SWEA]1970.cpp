// 알고리즘 코딩 스터디 14회차
// SWEA D2
// 1970. 쉬운 거스름돈

#include <iostream>

using namespace std;

int money[8] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;

		cout << "#" << t << "\n";
		for (int i = 0; i < 8; i++) {
			int cnt = 1;
			while (1) {
				if (N - (cnt * money[i]) < 0) {
					cnt--;
					N -= cnt * money[i];
					break;
				}
				cnt++;
			}
			cout << cnt << " ";
		}
		cout << '\n';
	}

	return 0;
}