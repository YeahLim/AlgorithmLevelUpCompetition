// ���� �˰��� ���͵� 4ȸ��
// ���� ��ȣ: 11286��
// ���� �̸�: ���� ��
// �˰���: �켱���� ť
// �ۼ���: ~24.02.15

#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

struct comp {
	bool operator() (long long int a, long long int b) {
		if (abs(a) == abs(b)) {
			return a > b;
		}
		return abs(a) > abs(b);
	}
};
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// �Է�
	int N;	// ������ ����
	cin >> N;

	priority_queue<long long int, vector<long long int>, comp> Q;
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