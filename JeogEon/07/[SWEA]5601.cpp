// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 5601. [Professional] �꽺 ������

#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	for (int t = 1; t <= TC; t++) {
		int N;
		cin >> N;

		cout << "#" << t << " ";
		for (int i = 0; i < N; i++) {
			cout << "1/" << N << " ";
		}
		cout << '\n';
	}
}