// ���� �˰��� ���͵� 4ȸ��
// ���� ��ȣ: 1927��
// ���� �̸�: �ּ� ��
// �˰���: �켱���� ť
// �ۼ���: ~24.02.15

#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// �Է�
	int N;	// ������ ����
	cin >> N;

	priority_queue<long long int, vector<long long int>, greater<long long int>> Q;
	long long int input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input == 0) {
			if (Q.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << Q.top() << '\n';
				Q.pop();
			}
		}
		else {
			Q.push(input);
		}
	}

	return 0;
}