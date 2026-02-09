// 코테 알고리즘 스터디 16회차
// SWEA D3
// 8658. Summation

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// 테스트 케이스 개수 입력

	for (int t = 1; t <= TC; t++) {
		vector<string> vec;
		for (int i = 0; i < 10; i++) {
			string input;
			cin >> input;
			vec.push_back(input);
		}

		vector<int> result;
		for (int i = 0; i < 10; i++) {
			int sum = 0;
			for (int j = 0; j < vec[i].length(); j++) {
				sum += vec[i][j] - '0';
			}
			result.push_back(sum);
		}

		sort(result.begin(), result.end(), greater<>());

		cout << "#" << t << " ";
		cout << result[0] << " " << result[9] << '\n';
	}
}