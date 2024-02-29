// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 12847��
// ���� �̸�: �� �Ƹ�����Ʈ
// �˰���: �����̵� ������
// �ۼ���: 24.03.01

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;	// ���� ���� ����
	int m;	// ���� �� �ִ� ��
	cin >> n >> m;

	long long int input;
	vector<long long int> money;
	money.push_back(0);
	for (int i = 1; i <= n; i++) {
		cin >> input;
		money.push_back(input + money[i - 1]);	 // ������
	}

	// ����
	long long int best = 0;
	int ptr = m;
	while (ptr <= n) {
		long long int sum = money[ptr] - money[ptr - m];
		if (sum > best) {
			best = sum;
		}

		ptr++;
	}


	// ���) �ؼ��� ���� �ؼ� �� �� �ִ� �ִ� ����
	cout << best;

	return 0;
}