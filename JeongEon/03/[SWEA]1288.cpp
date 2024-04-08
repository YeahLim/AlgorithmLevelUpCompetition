// 제 12회 알고리즘 스터디
// SWEA D2
// 문제명: 새로운 불면증 치료법
// 문제번호: 1288번

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

bool check[10];	// 0 ~ 9

bool all_fine() {
	for (int i = 0; i < 10; i++) {
		if (!check[i]) {
			return true;
		}
	}
	return false;
}

int main() {
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;

		memset(check, false, sizeof(check));

		int multi = 1;
		while (all_fine()) {
			string num = to_string(N * multi);
			for (int j = 0; j < num.length(); j++) {
				if (!check[num[j] - '0']) {
					check[num[j] - '0'] = true;
				}
			}

			multi++;
		}

		cout << "#" << i + 1 << " " << N * (multi - 1) << '\n';
	}

	return 0;
}