// <����>
// ������ȣ: 4779��
// �����̸�: ĭ��� ����
// �˰���: ���
// ������ ������: 24.02.03

#include <iostream>
#include <cmath>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void print(char* arr, int size);	// ��� ��� �Լ�
void cantor(char* arr, int size, int N);	// ĭ��� ���� ����� �Լ�

int main(void) {

	while (1) {
		int N;	// �Է�) �����ϴ� Ƚ��
		cin >> N;

		if (cin.eof()) {	// ���ѷ��� Ż�� ���ǽ�: ������ ��
			break;
		}

		int size = (int)pow(3, N);	// ĭ��� ���� ���̴� 3�� �������� ������
		char* arr = new char[size];	// ĭ��� ����
		for (int i = 0; i < size; i++) {	// ĭ��� ���� �ʱ�ȭ
			arr[i] = '-';
		}

		cantor(arr, size, N - 1);
		print(arr, size);
	}

	return 0;
}

void print(char* arr, int size) {	// ��� ��� �Լ�
	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
	cout << '\n';
}

void cantor(char* arr, int size, int N) {	// ĭ��� ���� ����� �Լ�
	if (N >= 0) {
		int cnt = 0;
		bool erase = false;
		for (int i = 0; i < size; i++) {
			if (erase) {
				cnt++;
				arr[i] = ' ';
				if (cnt >= pow(3, N)) {
					cnt = 0;
					erase = false;
					continue;
				}
			}
			else {
				cnt++;
				if (cnt >= pow(3, N)) {
					cnt = 0;
					erase = true;
					continue;
				}
			}
		}

		N--;
		cantor(arr, size, N);
	}
}