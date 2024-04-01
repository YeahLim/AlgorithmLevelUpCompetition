// ���� �˰��� ���͵� 4ȸ��
// ���� ��ȣ: 13305��
// ���� �̸�: ������
// �˰���: �׸��� �˰���
// �ۼ���: ~24.02.14

#include <iostream>
#include <climits>

using namespace std;

int main(void) {
	// �Է�
	int N;	// ������ ����
	cin >> N;

	int* km = new int[N];	// ���� �� ���� ����
	for (int i = 0; i < N - 1; i++) {
		cin >> km[i];
	}

	int* price = new int[N];	// �� ������ ����
	for (int i = 0; i < N; i++) {
		cin >> price[i];
	}

	int min_price = INT_MAX;
	long long int result = 0;	// �����
	for (int i = 0; i < N - 1; i++) {
		if (price[i] < min_price) {
			min_price = price[i];
		}
		result += (long long int)km[i] * (long long int)min_price;
	}

	// ���) ���� ���� ���ÿ��� ���� ������ ���÷� ���� �ּ� ����
	cout << result;

	return 0;
}