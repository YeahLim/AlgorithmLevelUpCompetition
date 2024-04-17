// 13회 알고리즘 스터디
// SWEA
// 1966. 숫자를 정렬하자

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;

		int input;
		vector<int> vec;
		for (int i = 0; i < N; i++) {
			cin >> input;
			vec.push_back(input);
		}

		sort(vec.begin(), vec.end());

		cout << "#" << t << " ";
		for (int i = 0; i < vec.size(); i++) {
			cout << vec[i] << " ";
		}
		cout << '\n';
	}

	return 0;
}