// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 5162. �ΰ��� ���� ������

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
		int A, B, C;
		cin >> A >> B >> C;

		int result;
		if (A >= B) {
			result = C / B;
		}
		else {
			result = C / A;
		}

		cout << "#" << t << " ";
		cout << result << '\n';
	}
}