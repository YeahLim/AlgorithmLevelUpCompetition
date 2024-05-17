// 코테 알고리즘 스터디 17회차
// SWEA D4
// 7829. 보물왕 태혁

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int tc = 1; tc <= TC; tc++) {
		int N;
		cin >> N;

		vector<int> arr;
		for (int i = 0; i < N; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		sort(arr.begin(), arr.end());

		cout << "#" << tc << " ";
		cout << arr[0] * arr[N - 1] << '\n';
	}

	return 0;
}