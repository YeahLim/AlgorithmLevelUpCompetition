// ���� �˰��� ���͵� 5ȸ��
// ���� ��ȣ: 17298��
// ���� �̸�: ��ū��
// �˰���: ����
// �ۼ���: 24.02.22 22�� 00�� ~ 24.02.22 22�� 20��

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int N;	// ������ ũ��
	cin >> N;

	int input;
	vector<int> A;	// ����
	for (int i = 0; i < N; i++) {
		cin >> input;
		A.push_back(input);
	}

	stack<int> s;
	stack<int> result;
	for (int i = N - 1; i >= 0; i--) {
		while (!s.empty() && s.top() <= A[i]) {
			s.pop();
		}

		if (s.empty()) {
			result.push(-1);
		}
		else {
			result.push(s.top());
		}

		s.push(A[i]);
	}

	for (int i = 0; i < N; i++) {
		cout << result.top() << ' ';
		result.pop();
	}

	return 0;
}
