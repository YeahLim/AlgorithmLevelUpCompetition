// 코테 알고리즘 스터디 17회차
// SWEA D3
//1213. [S/W 문제해결 기본] 3일차 - String

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC = 10;
	// cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		cin >> tc;

		string find;
		cin >> find;

		string input;
		cin >> input;

		int size = find.length();
		int result = 0;
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == find[0]) {
				bool check = true;
				for (int j = 0; j < size; j++) {
					if (input[i + j] != find[j]) {
						check = false;
					}
				}

				if (check) {
					result++;
				}
			}
		}

		cout << "#" << tc << " ";
		cout << result << '\n';
	}

	return 0;
}