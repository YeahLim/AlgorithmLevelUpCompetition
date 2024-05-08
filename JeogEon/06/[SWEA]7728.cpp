// 코테 알고리즘 스터디 16회차
// SWEA D3
// 7728. 다양성 측정

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		string input;
		cin >> input;

		bool check[10];
		memset(check, false, sizeof(check));

		int result = 0;
		for (int i = 0; i < input.length(); i++) {
			if (!check[input[i] - '0']) {
				check[input[i] - '0'] = true;
				result++;
			}
		}

		cout << "#" << t << " ";
		cout << result << '\n';
	}
}