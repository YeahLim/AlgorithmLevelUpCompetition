// 코테 스터디 15회차
// SWEA D2
// 2007. 패턴 마디의 길이

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

	for (int t = 1; t <= TC; t++) {
		string input;
		cin >> input;

		int result;
		for (int i = 1; i <= 10; i++) {
			vector<char> pattern;
			for (int j = 0; j < i; j++) {
				pattern.push_back(input[j]);
			}

			bool find_pattern = true;
			for (int j = 0; j < pattern.size(); j++) {
				if (pattern[j] != input[i + j]) {
					find_pattern = false;
					break;
				}
			}

			if (find_pattern) {
				result = pattern.size();
				break;
			}
		}

		cout << "#" << t << " ";
		cout << result << '\n';
	}

	return 0;
}
