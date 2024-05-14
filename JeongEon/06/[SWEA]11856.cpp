// 코테 알고리즘 스터디 17회차
// SWEA D3
// 11856. 반반

#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		string input;
		cin >> input;

		cout << "#" << tc << " ";

		bool result = true;
		bool arr[4] = { false, false, false, false };
		for (int i = 0; i < 3; i++) {
			int cnt = 1;

			if (arr[i]) {
				continue;
			}

			for (int j = i + 1; j < 4; j++) {
				if (input[i] == input[j]) {
					arr[i] = true;
					arr[j] = true;
					cnt++;
				}
			}
			if (cnt != 2) {
				result = false;
			}
		}

		if (result) {
			cout << "Yes" << '\n';
		}
		else {
			cout << "No" << '\n';
		}
	}

	return 0;
}