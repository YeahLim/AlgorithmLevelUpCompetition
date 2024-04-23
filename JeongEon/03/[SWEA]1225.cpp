// �˰��� �ڵ� ���͵� 14ȸ��
// SWEA D3
// 1225. [S/W �����ذ� �⺻] 7���� - ��ȣ������

#include <iostream>
#include <deque>

using namespace std;

deque<int> calculate(deque<int> deq) {
	bool zero = false;

	while (!zero) {
		for (int i = 1; i <= 5; i++) {
			if (deq.front() - i <= 0) {
				deq.pop_front();
				deq.push_back(0);
				zero = true;
				break;
			}
			else {
				deq.push_back(deq.front() - i);
				deq.pop_front();
			}
		}
	}

	return deq;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 10;

	for (int t = 1; t <= T; t++) {
		int N;
		cin >> N;

		deque<int> deq;
		for (int i = 0; i < 8; i++) {
			int input;
			cin >> input;
			deq.push_back(input);
		}

		deque<int> result = calculate(deq);

		cout << "#" << t << " ";
		for (int i = 0; i < 8; i++) {
			cout << result[i] << " ";
		}
		cout << '\n';
	}

	return 0;
}