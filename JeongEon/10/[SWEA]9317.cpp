// ���� ���͵� 15ȸ��
// SWEA D3
// 9317. �������� �޾ƾ���

#include <iostream>

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

		string origin;
		cin >> origin;

		string SukChan;
		cin >> SukChan;

		int result = 0;
		for (int i = 0; i < N; i++) {
			if (origin[i] == SukChan[i]) {
				result++;
			}
		}

		cout << "#" << t << " ";
		cout << result << '\n';
	}

	return 0;
}
