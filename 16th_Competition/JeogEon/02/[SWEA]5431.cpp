// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 5431. �μ����� ���� üũ�ϱ�

#include <iostream>
#include <string.h>

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

		bool arr[101];
		memset(arr, false, sizeof(arr));

		for (int i = 1; i <= K; i++) {
			int input;
			cin >> input;
			arr[input] = true;
		}

		cout << "#" << t << " ";
		for (int i = 1; i <= N; i++) {
			if (!arr[i]) {
				cout << i << " ";
			}
		}
		cout << '\n';
	}
}