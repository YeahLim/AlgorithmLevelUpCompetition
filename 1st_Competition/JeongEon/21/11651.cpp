// 백준 11651번 <좌표 정렬하기 2>
// 알고리즘 : 정렬
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	int N;
	cin >> N;

	int x, y;
	vector<pair <int, int>> v;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back({ y, x });
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i].second << " " << v[i].first << '\n';
	}

	return 0;
}