// 코테 알고리즘 스터디 16회차
// SWEA D3
// 13547. 팔씨름

#include <iostream>
#include <string>

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

		int o = 0;
		int x = 0;
		for (int i = 0; i < input.length(); i++) {
			if (input[i] == 'o') {
				o++;
			}
			else {
				x++;
			}
		}

		cout << "#" << t << " ";
		if (x <= 7) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}

	}
}