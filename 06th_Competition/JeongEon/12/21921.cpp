// ���� �˰��� ���͵� 6ȸ��
// ���� ��ȣ: 21921��
// ���� �̸�: ��α�
// �˰���: �����̵� ������
// �ۼ���: 24.03.01

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// �Է�
	int N;	// ���� ��
	int X;	// �湮�� ���� �� ��¥
	cin >> N >> X;

	int input;
	vector<int> visitor;
	visitor.push_back(0);
	for (int i = 1; i <= N; i++) {
		cin >> input;
		visitor.push_back(input + visitor[i - 1]);
	}

	// ����
	int ptr = X;
	stack<pair<int, int>> best;
	best.push({ 0, 0 });
	while (ptr <= N) {
		int sum = visitor[ptr] - visitor[ptr - X];
		if (sum > best.top().first) {
			best.push({ sum, 1 });
		}
		else if (sum == best.top().first) {
			best.top().second++;
		}

		ptr++;
	}

	// ���
	if (best.top().first == 0) {
		cout << "SAD";
	}
	else {
		cout << best.top().first << '\n';
		cout << best.top().second << '\n';
	}

	return 0;
}