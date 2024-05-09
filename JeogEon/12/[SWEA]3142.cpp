// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 3142. �����̿� �ź��� ���� ��

#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	for (int t = 1; t <= TC; t++) {
		int N, M;
		cin >> N >> M;

		int uni = 0;
		int twin = 0;
		for (int i = M; i >= 1; i--) {
			int tmp = N;
			if (2 * i <= tmp) {
				twin = i;
				tmp -= 2 * i;
				uni = tmp;
				if (twin + uni == M) {
					break;
				}
				twin = 0;
				uni = 0;
			}
		}

		if (uni == 0 && twin == 0) {
			uni = M;
		}

		cout << "#" << t << " ";
		cout << uni << " " << twin << '\n';
	}
}