// ���� 13909�� <â�� �ݱ�>
// �˰��� : ����
#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// �Էº�
	int N, count = 0;
	cin >> N;

	for (int i = 1; i * i <= N; ++i)
		count++;

	// ��º�
	cout << count << '\n';

	return 0;
}