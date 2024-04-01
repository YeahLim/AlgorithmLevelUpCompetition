// <����>
// ������ȣ: 11660��
// �����̸�: ���� �� ���ϱ� 5
// �˰���: ������
// ������ ������: 24.02.06

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// �Էº�
	int N;	// ǥ�� ũ��
	int M;	// ���� ���ؾ��ϴ� Ƚ��
	cin >> N >> M;

	int arr[1025][1025] = { 0 };	// ǥ + 0���� �ʱ�ȭ
	for (int i = 1; i <= N; i++) {	// ǥ �Է�(1���� N����)
		for (int j = 1; j <= N; j++) {
			int input;
			cin >> input;
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + input;
		}
	}

	// ��º�
	for (int i = 0; i < M; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int result = arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1];
		cout << result << '\n';
	}

	return 0;
}