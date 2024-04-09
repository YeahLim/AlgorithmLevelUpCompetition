// �� 12ȸ �˰��� ���͵�
// SWEA D2
// ������: �߰� ��հ� ���ϱ�
// ������ȣ: 1984��

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		int input;
		vector<int> vec;
		for (int i = 0; i < 10; i++) {
			cin >> input;
			vec.push_back(input);
		}

		sort(vec.begin(), vec.end());

		int sum = 0;
		for (int i = 1; i < 9; i++) {
			sum += vec[i];
		}

		int avg = floor((double)sum / 8 + 0.5);
		cout << "#" << t << " " << avg << '\n';
	}

	return 0;
}