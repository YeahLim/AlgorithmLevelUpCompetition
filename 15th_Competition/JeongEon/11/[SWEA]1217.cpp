// ���� ���͵� 15ȸ��
// SWEA D3
// 1217. [S/W �����ذ� �⺻] 4���� - �ŵ� ����

#include <iostream>

using namespace std;

int Jegop(int N, int M) {
	if (M == 0) return 1;

	return N * Jegop(N, M - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC = 10;
	// cin >> TC;

	for (int t = 1; t <= TC; t++) {
		int num;
		cin >> num;
		int N, M;
		cin >> N >> M;

		int result = Jegop(N, M);

		cout << "#" << t << " ";
		cout << result << '\n';
	}

	return 0;
}
