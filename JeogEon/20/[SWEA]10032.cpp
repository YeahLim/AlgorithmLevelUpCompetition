// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 10032. ���� �й�

#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	for (int t = 1; t <= TC; t++) {
		int N, K;
		cin >> N >> K;

		int maxi = N / K;
		int mini = N / K;
		if (N % K != 0) {
			maxi++;
		}

		cout << "#" << t << " ";
		cout << maxi - mini << '\n';
	}
}