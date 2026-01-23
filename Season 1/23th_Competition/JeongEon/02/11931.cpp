// 23회 알고리즘 스터디
// 백준 실버 5
// 11931. 수 정렬하기 4

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> vec;
	for (int i = 0; i < N; i++) {
		int input;
		cin >> input;

		vec.push_back(input);
	}

	sort(vec.begin(), vec.end(), greater<>());

	for (int i = 0; i < N; i++) {
		cout << vec[i] << '\n';
	}

	return 0;
}