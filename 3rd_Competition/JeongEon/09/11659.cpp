// <����>
// ������ȣ: 11659��
// �����̸�: ���� �� ���ϱ� 4
// �˰���: ������
// ������ ������: 24.02.04

#include <iostream>

using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// �Էº�
	int N;	// ���� ����
	int M;	// ���� �ؾ��ϴ� Ƚ��
	cin >> N >> M;

	long long int* arr = new long long int[N + 1];	// �Էµ� ��
	arr[0] = 0;
	long long int input;
	for (int i = 1; i <= N; i++) {
		cin >> input;
		arr[i] = arr[i - 1] + input;
	}

	int i; int j;	//  i��° ������ j��° ��
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		cout << arr[j] - arr[i - 1] << '\n';
	}

	return 0;
}