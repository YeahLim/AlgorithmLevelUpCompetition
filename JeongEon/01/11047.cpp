// ���� �˰��� ���͵� 4ȸ��
// ���� ��ȣ: 11047��
// ���� �̸�: ���� 0
// �˰���: �׸��� �˰���
// �ۼ���: ~24.02.13

#include <iostream>

using namespace std;

int main(void) {
	// �Էº�
	int N;	// ������ ���� ����
	int K;	// ������ ��
	cin >> N >> K;

	int* arr = new int[N];	// ������ ����
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int coin_cnt = 0;	// �ʿ��� ������ ���� -> �����
	for (int i = N - 1; i >= 0; i--) {
		if (arr[i] <= K) {
			coin_cnt += K / arr[i];
			K -= (K / arr[i]) * arr[i];
		}
	}

	// ���) K���� ����µ� �ʿ��� ������ ���� �ּҰ�
	cout << coin_cnt;

	return 0;
}