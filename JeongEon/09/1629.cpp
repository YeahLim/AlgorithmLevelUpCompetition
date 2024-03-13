// ���� �˰��� ���͵� 8ȸ��
// ���� ��ȣ: 1629��
// ���� �̸�: ����
// �˰���: ��������
// �ۼ���: 24.03.13

#include <iostream>

using namespace std;

long long int A, B, C;

long long int multi(long long int B) {
	if (B == 0) {
		return 1;
	}
	else if (B == 1) {
		return A % C;
	}

	long long int K = multi(B / 2) % C;
	if (B % 2 == 0) {
		return K * K % C;
	}
	else {
		return (K * K % C) * (A % C);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	cin >> A >> B >> C;

	cout << multi(B) % C;

	return 0;
}