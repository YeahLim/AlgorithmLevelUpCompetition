// 코테 알고리즘 스터디 17회차
// SWEA D3
// 14692. 통나무 자르기

#include <iostream>

using namespace std;

string alphabet = { "abcdefghijklmnopqrstuvwxyz" };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		int N;
		cin >> N;

		cout << "#" << tc << " ";

		if (N % 2 == 0) {
			cout << "Alice\n";
		}
		else {
			cout << "Bob\n";
		}

	}

	return 0;
}