// <����>
// ������ȣ: 2559��
// �����̸�: ����
// �˰���: ������
// ������ ������: 24.02.05

#include <iostream>

using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// �Էº�
	int N;	// �µ��� ������ ��ü ��¥�� ��
	int K;	// ���� ���ϱ� ���� �������� ��¥�� ��
	cin >> N >> K;

	int* arr = new int[N + 1];
	int* sum = new int[N + 1];
	for (int i = 0; i < N + 1; i++) {
		sum[i] = 0;
	}

	int maximum = -10000000; // -1��
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		sum[i] += sum[i - 1] + arr[i];
		if (i > K) {
			sum[i] -= arr[i - K];
		}

		if (i >= K && sum[i] > maximum) {
			maximum = sum[i];
		}
	}

	cout << maximum << '\n';

	return 0;
}