// ���� ���͵� 15ȸ��
// SWEA D2
// 2005. �Ľ�Į�� �ﰢ��

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;

	for (int t = 1; t <= TC; t++) {
		int N;
		cin >> N;

		vector<int>* vec = new vector<int>[N];
		for (int i = 0; i < N; i++) {
			vec[i].push_back(1);
			if (i == 0) {
				continue;
			}
			for (int j = 0; j < vec[i - 1].size() - 1; j++) {
				vec[i].push_back(vec[i - 1][j] + vec[i - 1][j + 1]);
			}
			vec[i].push_back(1);
		}

		cout << "#" << t << "\n";
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < vec[i].size(); j++) {
				cout << vec[i][j] << " ";
			}
			cout << "\n";
		}
	}

	return 0;
}
