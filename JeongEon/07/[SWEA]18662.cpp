// 코테 스터디 15회차
// SWEA D3
// 18662. 등차수열 만들기

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int t = 1; t <= TC; t++) {
		int a, b, c;
		cin >> a >> b >> c;

		vector<double> result;
		result.push_back(abs((2 * b - c) - a));
		result.push_back(abs((double)(a + c) / 2 - b));
		result.push_back(abs((2 * b - a) - c));

		sort(result.begin(), result.end());

		cout << "#" << t << " ";
		cout << fixed;
		cout.precision(1);
		cout << result[0] << '\n';
	}

	return 0;
}
