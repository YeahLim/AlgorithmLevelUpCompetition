// ���� 1436�� <��ȭ���� ��>
// �˰��� : ���Ʈ���� �˰���
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int N, cnt = 0;
	cin >> N;

	int num = 665;
	while (cnt != N) {
		num++;
		int tmp = num;

		while (tmp != 0) {
			if (tmp % 1000 == 666) {
				cnt++;
				break;
			}
			else {
				tmp /= 10;
			}
		}
	}

	cout << num << endl;

	return 0;
}