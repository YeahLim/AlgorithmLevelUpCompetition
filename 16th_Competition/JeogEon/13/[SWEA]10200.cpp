// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 10200. ������ ����

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	for (int t = 1; t <= TC; t++) {
		int N, A, B;
		cin >> N >> A >> B;

		int mini;
		int maxi;
		if (A + B > N) {
			mini = (A + B) - N;
		}
		else {
			mini = 0;
		}

		if (A >= B) {
			maxi = B;
		}
		else {
			maxi = A;
		}

		cout << "#" << t << " ";
		cout << maxi << " " << mini << '\n';
	}
}