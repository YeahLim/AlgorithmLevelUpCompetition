// ���� �˰��� ���͵� 16ȸ��
// SWEA D3
// 8673. �ڵ� ��ʸ�Ʈ1

#include <iostream>
#include <queue>
#include <cstdlib>

using namespace std;

int square(int K) {
	if (K <= 0) {
		return 1;
	}

	return 2 * square(K - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int TC;
	cin >> TC;	// �׽�Ʈ ���̽� ���� �Է�

	for (int t = 1; t <= TC; t++) {
		int K;
		cin >> K;

		int person = square(K);

		queue<int> Q;
		for (int i = 0; i < person; i++) {
			int input;
			cin >> input;
			Q.push(input);
		}

		int result = 0;
		while (Q.size() > 1) {
			int size = Q.size();
			for (int i = 1; i <= size; i += 2) {
				int A = Q.front();
				Q.pop();
				int B = Q.front();
				Q.pop();

				if (A >= B) {
					Q.push(A);
				}
				else {
					Q.push(B);
				}

				result += abs(A - B);
			}
		}

		cout << "#" << t << " ";
		cout << result << '\n';
	}
}