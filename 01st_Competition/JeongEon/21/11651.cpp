// ���� 11651�� <��ǥ �����ϱ� 2>
// �˰��� : ����
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