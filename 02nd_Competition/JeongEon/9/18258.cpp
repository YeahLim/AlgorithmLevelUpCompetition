// ���� 18258�� <ť 2>
// �˰��� : ť
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	// �Էº�
	int N;
	cin >> N;

	// ��º�
	string s_input;
	int i_input;
	queue<int> q;
	for (int i = 0; i < N; i++) {
		cin >> s_input;
		if (s_input == "push") {
			cin >> i_input;
			q.push(i_input);
		}

		if (s_input == "pop") {
			if (!q.empty()) {
				cout << q.front() << '\n';
				q.pop();
			}
			else {
				cout << -1 << '\n';
			}
		}

		if (s_input == "size") {
			cout << q.size() << '\n';
		}

		if (s_input == "empty") {
			if (q.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}

		if (s_input == "front") {
			if (!q.empty()) {
				cout << q.front() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}

		if (s_input == "back") {
			if (!q.empty()) {
				cout << q.back() << '\n';
			}
			else {
				cout << -1 << '\n';
			}
		}
	}

	return 0;
}